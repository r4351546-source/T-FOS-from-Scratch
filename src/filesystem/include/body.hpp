#pragma once

#include "registration/include/registration.hpp"

#include <string>
#include <map>

struct folders {
    std::string name;
        folders* parent = nullptr;
        static std::map<std::string, folders*> children;
};
inline static folders root{"system/" + login + "/", nullptr};
inline static folders* curent = &root;

