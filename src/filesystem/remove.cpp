//headers
#include "include/funcs.hpp"
#include "include/body.hpp"
#include "sounds/include/sounds.hpp"

//libs
#include <iostream>
#include <string>

//colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

//not using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::cin;

void commands::remove() {
    std::string fname;
    std::cin >> fname;

    auto t = current->children.find(fname);

    if (current->children.find(fname) != current->children.end()) {
        if(t->second->type == type::file) {
            current->children.erase(fname);
            cout << "file '" << fname << "removed successfully. " << endl;
            return;
        }
        else if(t->second->type == type::user) {
            cout << RED << "you cannot remove user catalog" << RESET << endl;
        }
        current->children.erase(fname); 
        cout << GREEN << "Folder '" << fname << "' removed successfully." << RESET << endl;

    }
    else if(fname == "system/") {
        cout << RED << "You cannot remove your own system folder." << RESET << endl;
    }    
    else {
        sounds::done();
        cout << RED << "Folder '" << fname << "' does not exist in the current directory." << RESET << endl;
    }

    

}