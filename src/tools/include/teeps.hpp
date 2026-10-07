/*what is this?
- teeps — text editor for files
- his also ingrated with the vfs(virtual filesystem) 
---:6th october 
- all realization in '/src/tools/teeps' directory
====================================================
*/

#pragma once

#include <string>
#include <vector>

#include <filesystem/include/body.hpp>

enum class mode {
    insert, 
    command
};

struct teeps {
    std::string name;

    void modecommand();
    void modeinsert();
    void modeswitcher();
    void editor(const std::string& fileName);
    void open(vfs* file);
    void save();
    
    char getkey();

    std::vector<std::string> lines;

    mode EditMode = mode::insert; 
    vfs* openedFile = nullptr;

    size_t cursorPosition = 0;
    size_t currentLine = 0;
    size_t scrollOffset = 0;
    size_t visibleLines = 10;

    bool editing = false;
};

