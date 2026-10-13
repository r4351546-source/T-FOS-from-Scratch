#include "filesystem/include/body.hpp"
#include "include/shell.hpp"
#include "registration/include/registration.hpp"

#include <iostream>
#include <string>

void shell::cmd() {
    sh_name = "dsh";
    the_shell = login + "@" + current->name + "|%";
    std::cout << "search packet.." << std::endl;
    std::cout << "sucees! packet download" << std::endl;
}