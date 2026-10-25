#include "users/include/registration.hpp"

#include <iostream>
#include <string>

void funcs::switchUser() {
    std::string username;
    std::cin >> username;

    auto it = x.users.find(username);

    if(x.users.find(username) != x.users.end()) {
        std::cout << "Password: ";
    std::cin >> x.password;

    if (std::get<0>(it->second) != x.password) {
        std::cout << "Incorrect password" << std::endl;;
        return;
    }
    x.login = username;
    x.password = std::get<0>(it->second);
    x.uid = std::get<1>(it->second);

    current = std::get<3>(it->second).get();

    std::cout << "Switched to " << x.login << '\n';
    }
    else if(username == "root") {
        std::string checkroot;
        std::cin >> checkroot;
        if(checkroot != x.rootPasswd) {
            std::cout << "root not set, password valid" << std::endl;
            return;
        }
        while (current->parent) {
        current = current->parent;
        }
        x.login = username;
        x.password = x.rootPasswd;
        x.root = true;
        
    }
    else {
        std::cout << "user " << username << " dont found" << std::endl;
        return;
    }
}