#include "tools/include/teeps.hpp"
#include "filesystem/include/body.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

void teeps::modecommand() {
    std::cout << "Command: ";
    std::string command;
    std::getline(std::cin, command);
    if(editing == false) {
        return;
    }

    if (command == "q") {
        editing = false;
        std::system("clear");
    }
    else if(command == "w") {
        save();
    }
    else if(command == "wq") {
        save();
        editing = false;
        std::system("clear");
    }
    else if(command == "i") {
        EditMode = mode::insert;
    }
    
}