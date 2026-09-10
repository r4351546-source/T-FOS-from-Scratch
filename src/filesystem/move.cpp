#include "include/body.hpp"
#include "include/funcs.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;



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
        if(!curent->children[*the_target]) {
            cout << "[ERROR]:the folder does not exist" << endl;
        }
        else {
        curent = curent->children[*the_target];
        }
    }
delete the_target;

}

