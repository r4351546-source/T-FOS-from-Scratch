#include "tools/include/teeps.hpp"

#include <iostream>
#include <limits>
#include <memory>

void teeps::editor(std::string fileName, std::string args) {
    std::cin >> args;

    if (args == "help") {
        std::cout << "Usage(new file): teeps new <file>" << std::endl;
        std::cout << "Usage(old file): teeps res <file>" << std::endl;
        std::cout << "other arguments:" << std::endl;
        std::cout << "  help   - Show this help message" << std::endl;
        std::cout << "  info   - Show information about editor" << std::endl;
        std::cout << "  --vers - Show version information" << std::endl;
        std::cout << "  command - Switch to command mode" << std::endl;
    }

    else if (args == "info") {
        std::cout << "Teeps - Text Editor for Files" << std::endl;
        std::cout << "Integrated with the Virtual File System (VFS)" << std::endl;
        std::cout << "All realizations are in /src/tools/teeps" << std::endl;
    }

    else if (args == "--vers") {
        std::cout << "Teeps Version 1.0.0" << std::endl;
    }

    else if (args == "new") {
        std::cin >> fileName;

        if (current->children.find(fileName) != current->children.end()) {
            std::cout << "File already exists: " << fileName << std::endl;
            return;
        }

        auto file = std::make_shared<vfs>();

        file->name = fileName;
        file->type = type::file;
        file->parent = current;

        current->children[fileName] = file;

        name = fileName;
        openedFile = file.get();
        lines.clear();

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );

        editing = true;
        EditMode = mode::insert;

        modeswitcher();
    }

    else if (args == "res") {
        std::cin >> fileName;

        auto file = current->children.find(fileName);

        if (
            file == current->children.end() ||
            file->second == nullptr ||
            file->second->type != type::file
        ) 
        
        {
            std::cout << "File not found: " << fileName << std::endl;
            return;
        }

        name = fileName;

        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(),
            '\n'
        );

        open(file->second.get());

        editing = true;
        EditMode = mode::insert;

        modeswitcher();
    }

    else {
        std::cout << "Unknown argument: " << args << std::endl;
        std::cout << "Use 'teeps help' for usage information." << std::endl;
    }
}