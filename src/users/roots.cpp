#include "users/include/registration.hpp"
#include <iostream>

void funcs::rootstat() {
    bool rootset;
    if(x.rootPasswd.empty()) {
        rootset = false;
    }
    else {
        rootset = true;
    }
    std::cout << "in root: " << x.root << std::endl;
    std::cout << "root password set: " << rootset << std::endl;
}