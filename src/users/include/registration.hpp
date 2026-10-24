#pragma once
#include <string>
#include <memory>
#include <tuple>
#include <filesystem/include/body.hpp>

struct usr {
    std::string login;
    type type = type::user;
    std::string password;
    std::tuple<std::string, std::string, std::shared_ptr<vfs>> users;
};

namespace funcs {
    void adduser();
    void rename();
    void switchUser();

};
