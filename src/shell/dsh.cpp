#include "filesystem/include/body.hpp"
#include "include/shell.hpp"
#include "users/include/registration.hpp"

#include <iostream>
#include <string>

void shell::dsh() {
    sh_name = "dsh";
    the_shell = x.login + "@" + current->name + "|%";
    std::cout << "search packet.." << std::endl;
    std::cout << "sucees! packet download" << std::endl;
}