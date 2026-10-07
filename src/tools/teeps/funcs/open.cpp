#include "tools/include/teeps.hpp"
#include "filesystem/include/body.hpp"

#include <iostream>

void teeps::open(vfs* file) {
    if(file == nullptr) {
        return;
    }
    openedFile = file;
    lines = openedFile->content;
}