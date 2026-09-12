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
    string* the_target = new string;
    cin >> *the_target;
    if(*the_target == "-") {
        if(curent->parent != nullptr) {
            curent = curent->parent;
        }
        else {
            cout << GREEN << "you are in the main root!" << RESET << endl;
        }
    }
    else if(*the_target == "sys/" + login) {
        cout << RED << "[ERROR]:you cannot move to your own system folder" << RESET << endl;
    }
    else if(curent->children.count(*the_target)) {
        if(!curent->children[*the_target]) {
            cout << RED << "[ERROR]:the folder does not exist" << RESET << endl;
        }
        else {
        curent = curent->children[*the_target];
        }
    }
delete the_target;

}

