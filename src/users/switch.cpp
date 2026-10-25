#include "users/include/registration.hpp"

#include <iostream>
#include <string>

void funcs::switchUser() {
    std::string username;
    std::cin >> username;

    usr d;
    d.users.find(username);

    if(d.users.find(username) != d.users.end()) {
        
    }
    else {
        std::cout << "user " << username << " dont found" << std::endl;
        return;
    }
}