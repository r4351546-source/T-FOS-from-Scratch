#pragma once

#include <string>
#include <map>

struct folders {
    std::string name;
        folders* parent = nullptr;
        std::map<std::string, folders*> children;
};
inline folders root{"/", nullptr};
inline folders* curent = &root;
