#include "tools/include/teeps.hpp"
#include <iostream>

void teeps::modeinsert() {
    std::string line;
    while (true) {
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
}