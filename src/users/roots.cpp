#include "users/include/registration.hpp"
#include <iostream>
#include <string>

void funcs::rootv() {
    bool rootset;
    std::string out;

    if(x.rootPasswd.empty()) {
        rootset = false;
        out = "false";
    }
    else {
        rootset = true;
        out = "true";
    }
    std::string o;
    if(x.root == true) {
        o = "true";
    }
    else {
        o = "false";
    }

    std::cout << "in root: " << o << std::endl;
    std::cout << "root password set: " << out << std::endl;
}