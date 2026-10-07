#include "tools/include/teeps.hpp"

#include <iostream>
#include <string>
#include <cstdlib>

void teeps::modeinsert() {
    std::string line;
    std::system("clear");

    while (editing && EditMode == mode::insert) {
        std::getline(std::cin, line);

        if (!std::cin) {
            editing = false;
            break;
        }

        if (line == "command") {
            EditMode = mode::command;
            continue;
        }

        lines.push_back(line);
    }
}