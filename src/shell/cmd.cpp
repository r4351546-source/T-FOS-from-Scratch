#include "filesystem/include/body.hpp"
#include "include/shell.hpp"

#include <iostream>
#include <string>

void shell::cmd() {
    sh_name = "cmd";
    the_shell = curent->parent->name + ":>";
    std::cout << "search packet.." << std::endl;
    std::cout << "sucees! packet download" << std::endl;
}