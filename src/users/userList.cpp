#include <iostream>
#include <string>
#include "users/include/registration.hpp"

void funcs::userList() {
    std::cout << "user                  uid" << std::endl;
    for(const auto& [username, UID]  : x.users) {
        std::cout << username << "                  " << std::get<1>(UID) << std::endl;
    }
}