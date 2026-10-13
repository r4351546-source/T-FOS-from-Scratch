#include "include/body.hpp"
#include "include/funcs.hpp"
#include "registration/include/registration.hpp"


#include <iostream>
#include <string>

//colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"


using std::string;
using std::cout;
using std::endl;
using std::cin;



void commands::move_to_folder() {
    string fname;
    cin >> fname;

        current->children.find(fname);
        if(fname == "-" && current->parent != nullptr) {
            current = current->parent;
        }

        else if(fname == "-" && current->parent == nullptr) {
            cout << "you are in root" << endl;
        }

        else if(fname == "system/") {
            cout << "you dont have permissions" << endl;
        }

        else if(current->children.find(fname) == current->children.end()
                || current->children.find(fname)->second->type == type::file
        ) 
        {
            cout << "directory does not exist" << endl;
        }

        else {
            current = current->children[fname].get();
        }
    
}

