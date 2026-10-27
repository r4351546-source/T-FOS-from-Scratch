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
    dir dr;
    usr() {
        if(dr == dir::rootDir) {
            root = true;
        }
        if(!rootPasswd.empty()) {
            rootset = true;
        }
        if(dr == dir::rootDir) {
            root = true;
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
