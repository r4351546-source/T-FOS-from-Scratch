#pragma once
#include <string>
#include <memory>
#include <tuple>
#include <map>
#include <filesystem/include/body.hpp>
#include <string>

struct usr {
    std::string rootPasswd;
    std::string login = "user";
    std::string password;
    std::string uid;
    std::map<std::string, std::tuple<std::string, std::string, type, std::shared_ptr<vfs>>> users;
    bool root = false;
    bool rootset = false;
    type type;
    usr() {
        if(type == type::user) {
            root = false;
        }
        if(!rootPasswd.empty()) {
            rootset = true;
        }
        
    }
    ~usr() {

    }
};
inline usr x;

namespace funcs {
    void adduser();
    void switchUser();
    void userList();
    void makeroot();
    void rootv();
};
