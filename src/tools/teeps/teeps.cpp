#include "tools/include/teeps.hpp"
#include <string>
#include <termios.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>

void teeps::editor(const std::string& fileName) {
    std::system("clear");
    teeps::modeinsert();
}