/**
 * Replace this template with your own main source (at your own project location)
 */

#include <iostream>
#include "FrontEnd.h"

class MyConsoleFrontEnd : public tris::FrontEnd<tris::frontend::Console> {
public:
    MyConsoleFrontEnd(const tris::backend::API_STRING& sExe) : tris::FrontEnd<tris::frontend::Console>(sExe) {}

    virtual bool execute(const tris::backend::API_STRING& sCommandLine,bool& done) {
        return false; // command unknown (not implemented)
    }

    virtual bool help(const tris::backend::API_STRING& sCommandLine) {
        return tris::FrontEnd<tris::frontend::Console>::help(sCommandLine); // Invoke default help
    }
};

using ActualFrontEnd = MyConsoleFrontEnd;

int main(int argc, char *argv[]){
    int result = 0;
    try {
        auto front_end = std::make_shared<ActualFrontEnd>(argv[0]);
        front_end->run();
    }
    catch (std::runtime_error& e) {
        std::cout << "\nFailed. Exception = " << e.what();
        result = 1; // Failed
    }
    std::cout << "\nDone!";
    std::cout << "\n";
    return result;
}