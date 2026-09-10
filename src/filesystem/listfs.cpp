#include "include/funcs.hpp"
#include "include/body.hpp"
#include <iostream>

using std::cout;
using std::endl;


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
