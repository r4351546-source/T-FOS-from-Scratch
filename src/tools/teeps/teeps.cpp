#include "tools/include/teeps.hpp"
#include <string>
#include <termios.h>
#include <unistd.h>
#include <cstdlib>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void teeps::editor(std::string fileName, std::string args) {
    cin >> args;

    if(args == "help") {
        cout << "Usage(new file): teeps new <file>" << endl;
        cout << "Usage(old files): teeps res <file>" << endl;
        cout << "other Arguments:" << endl;
        cout << "  help - Show this help message" << endl;
        cout << "  info - Show information about editor" << endl;
        cout << "  --vers - Show version information" << endl;
        cout << "  if you write in file 'command' you will switch to command mode" << endl;
    }
    else if(args == "info") {
        cout << "Teeps - Text Editor for Files" << endl;
        cout << "Integrated with the Virtual File System (VFS)" << endl;
        cout << "All realizations are in the '/src/tools/teeps' directory" << endl;
    }
    else if(args == "--vers") {
        cout << "Teeps Version 1.0.0" << endl;
    }
    else if(args == "new") {
        cin >> fileName;
        teeps::editing = true;
        teeps::modeinsert();
    }
    else if(args == "res") {
        cin >> fileName;
        vfs::open();
        if(openedFile == nullptr) {
            cout << "File not found: " << fileName << endl;
            return;
        }
        teeps::open(openedFile);
        teeps::editing = true;
        teeps::modeinsert();
    }

    else {
        cout << "Unknown argument: " << args << endl;
        cout << "Use 'help' for usage information." << endl;
    }
}