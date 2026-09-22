#pragma once

#include "registration/include/registration.hpp"

#include <memory>
#include <string>
#include <map>

struct folders {
    std::string name;
        folders* parent = nullptr;
        std::map<std::string, std::shared_ptr<folders>> children;
};
inline static folders root{"system/" + login + "/", nullptr};
inline static folders* curent = &root;

