#include "tools/include/teeps.hpp"
#include "filesystem/include/body.hpp"

#include <iostream>

void teeps::open(vfs* file) {
    if(file == nullptr) {
        return;
    }
    openedFile = file;
    lines = openedFile->content;
    
    if(lines.empty()) lines.emplace_back();

    currentLine = 0;
    cursorPosition = 0;
    scrollOffset = 0;

}