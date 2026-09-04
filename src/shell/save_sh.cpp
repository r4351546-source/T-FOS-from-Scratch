#include "include/shell.hpp"
#include <iostream>
#include <fstream>
#include <string>

using std::endl;



void shell::save() {
    shelljs << "{" << endl;
    shelljs << "\"sh_name\": \"" << sh_name << "\"," << endl;
    shelljs << "\"the_shell\": \"" << the_shell << "\"" << endl;
    shelljs << "}" << endl;
    shelljs.close();
} 