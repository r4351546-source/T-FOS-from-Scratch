#include "users/include/registration.hpp"
#include <iostream>
#include <string>

void funcs::makeroot() {
    std::cin >> x.rootPasswd;
    if(x.rootPasswd.size() < 10) {
        std::cout << "size to very small, password must be 10 symbols or more" << std::endl;
        return;
    }

    std::cout << "retry: ";
    std::string check;
    std::cin >> check;
    if(check != x.rootPasswd) {
        std::cout << "password root check failed, root password dont set" << std::endl;
        x.rootPasswd.clear();
        x.rootset = false;
        return;
    }
    std::cout << "password for root set" << std::endl;
    x.rootset = true;
}