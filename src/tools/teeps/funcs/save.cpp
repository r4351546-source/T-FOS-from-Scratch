#include "filesystem/include/body.hpp"
#include "tools/include/teeps.hpp"
#include <iostream>

void teeps::save() {
    if(openedFile == nullptr) {
        return;
    }
    openedFile->content = lines; 
    
    openedFile->type = type::file;
}