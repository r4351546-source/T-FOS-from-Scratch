#pragma once
#include <string>
#include <memory>
#include <tuple>
#include <map>
#include <filesystem/include/body.hpp>
#include <string>

struct usr {
    std::string login;
    std::string password;
    std::string uid;
    std::map<std::string,
     std::tuple<std::string, std::string, type,
      std::shared_ptr<vfs>>> users;
};

namespace funcs {
    void adduser();
    void switchUser();
    void userList();

};
