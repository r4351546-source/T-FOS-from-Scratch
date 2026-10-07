#include "filesystem/include/body.hpp"
#include "tools/include/teeps.hpp"
#include <iostream>

void teeps::save() {
    if(openedFile == nullptr) {
        return;
    }
    openedFile->content = lines; 
    current->children[openedFile->name]->type = type::file;
    openedFile->type = type::file;
}