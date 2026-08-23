#include "include/body.h"
#include <iostream>
#include <string>

using namespace std;



void commands::create_folder() {
string *targetName = new string;
cin >> *targetName;
folders* newFolder = new folders{*targetName, curent};
curent->children[*targetName] = newFolder;
cout << "folder created" << endl;
delete targetName;
}

void commands::list_folder() {
    if(curent->children.empty()) {

    }
    else {
        for(auto const& [name, folder_ptr] : curent->children) {
            cout << thenum << "." << name << "<--" << endl;
            thenum++;
        }
        thenum = 1;
    }

}

void commands::move_to_folder() {
    string* the_target = new string;
    cin >> *the_target;
    if(*the_target == "-") {
        if(curent->parent != nullptr) {
            curent = curent->parent;
        }
        else {
            cout << "you are in the main root!" << endl;
        }
    }
    else if(curent->children.count(*the_target)) {
        while(!curent->children[*the_target]) {
            cout << "[ERROR]:the folder does not exist" << endl;
        }
        curent = curent->children[*the_target];

    }
delete the_target;
}
void commands::curent_folder() {
cout << "curent folder: " << curent << endl;
}



