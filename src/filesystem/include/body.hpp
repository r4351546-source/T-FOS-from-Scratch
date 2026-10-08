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

    inline vfs* defFolders(const std::string& name) {
        auto newFolder = std::make_shared<vfs>(name, type::folder, current);
        parent->children[name] = newFolder;
        return newFolder.get();
    }

    inline vfs* defFiles(const std::string& name) {
        auto newFile = std::make_shared<vfs>(name, type::file, current, content);
        parent->children[name] = newFile;
        return newFile.get();
    }

};
inline vfs root{"system/" + login + "/", type::folder, nullptr};
inline vfs* current = &root;




