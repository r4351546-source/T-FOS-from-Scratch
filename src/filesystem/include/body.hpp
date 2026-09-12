#pragma once

#include "registration/include/registration.hpp"

#include <string>
#include <map>

struct folders {
    std::string name;
        folders* parent = nullptr;
        std::map<std::string, folders*> children;
};
inline folders root{"system/" + login + "/", nullptr};
inline folders* curent = &root;
