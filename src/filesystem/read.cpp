#include "include/funcs.hpp"
#include "include/body.hpp"
#include "tools/include/teeps.hpp"
#include "shell/include/shell.hpp"
#include <iostream>
#include <string>

#define RED     "\033[31m"

void commands::read() {
    std::string name;
    std::cin >> name;

    auto file = current->children.find(name);
    if
    (file == current->children.end()
    || file->second->type != type::file
    )
{
        std::cout << RED << sh_name << "file does not exist in this directory" << std::endl;
        return;
    }

    else {
        for(const auto& line : file->second->content) {
            std::cout << line << std::endl;
        }
    }
}