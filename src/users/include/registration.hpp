#pragma once
#include <string>
#include <tuple>
#include <filesystem/include/body.hpp>

struct usr {
    std::string login = "user";
    std::string password;
    std::tuple<std::string, std::string, vfs()> users; 
};
