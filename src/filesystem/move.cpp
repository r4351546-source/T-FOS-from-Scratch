#include "include/body.hpp"
#include "include/funcs.hpp"
#include "users/include/registration.hpp"


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
    dir dircheck = dir::defDirectory;

    string fname;
    cin >> fname;

        if(fname == "-") {
            if(current->parent == nullptr) {
            cout << "you are in root" << endl;
            return;
        }
        dircheck = dir::goToParent;
        if(dircheck == dir::goToParent) {
            current = current->parent;
        }
        return;
        }

        

        else if(fname == "system/" ) {
            cout << "you dont have permissions" << endl;
        }

        auto it = current->children.find(fname);
    if (it == current->children.end() ||
        it->second->type == type::file 
        || dircheck == dir::goToParent || 
        dircheck != dir::defDirectory 
      ) {
        cout << "directory does not exist" << endl;
        return;
    }
    
    current = it->second.get();
}
