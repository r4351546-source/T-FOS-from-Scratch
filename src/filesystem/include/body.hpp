#pragma once

#include "registration/include/registration.hpp"

#include <memory>
#include <string>
#include <map>
#include <vector>

enum class type {
    file,
    folder
};

struct vfs {
    std::string name;
    type type;
    vfs* parent = nullptr;

    std::vector<std::string> content;
    std::map<std::string, std::shared_ptr<vfs>> children;
};

inline static vfs root{"system/" + login + "/", type::folder, nullptr};
inline static vfs* current = &root;

