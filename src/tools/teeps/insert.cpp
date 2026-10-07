#include "tools/include/teeps.hpp"
#include <iostream>
#include <string>

void teeps::modeinsert() {
    std::string line;
    while (true) {
        if(openedFile == nullptr) {
        
        if(editing == false) {
            break;
        }
        else {
        for(int i = 0; i < teeps::scrollOffset && i < lines.size(); i++) {
            std::cout << lines[i] << std::endl;
        }
        std::getline(std::cin, line);
        lines.push_back(line);
    }
        
    }
    else {
        for(int i = 0; i < teeps::scrollOffset && i < lines.size(); i++) {
            std::cout << lines[i] << std::endl;
        }
        std::getline(std::cin, line);
        if(line == "command"){
            teeps::modecommand();
        }
        lines.push_back(line);
    }
}
teeps::save();
}