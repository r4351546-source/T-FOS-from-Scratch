/*src/filesystem/include/body.hpp*/

/* 
in this file there are
body for vfs(Virtual File System)
*/

#pragma once

#include "users/include/registration.hpp"

#include <memory>
#include <string>
#include <map>
#include <vector>
enum class dir {
    goToParent,
    defDirectory,
    rootDir,
    other
};

enum class type {
    file,
    folder,
    user
};

struct vfs {
    std::string name;
    type type;
    dir dir;
    vfs* parent = nullptr;

    std::vector<std::string> content;
    std::map<std::string, std::shared_ptr<vfs>> children;

    inline vfs* defFiles(const std::string& name) {
    auto newFile = std::make_shared<vfs>(
        name, type::file, dir::other, this
    );

    vfs* result = newFile.get();
    children[name] = std::move(newFile);

    return result;
    }

    inline vfs* defFolders(const std::string& name) {
    auto newFolder = std::make_shared<vfs>(
        name, type::folder, dir::defDirectory, this
    );

    vfs* result = newFolder.get();
    children[name] = std::move(newFolder);

    return result;
    }
};
inline vfs root{"system/", type::folder, 
    dir::rootDir,  nullptr};
inline vfs* current = &root;


