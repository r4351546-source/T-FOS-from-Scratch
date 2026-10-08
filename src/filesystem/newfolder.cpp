#include "include/body.hpp"
#include "include/funcs.hpp"

#include <memory>
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void commands::create_folder() {
string targetName;
std::getline(std::cin, targetName);

auto newFolder = std::make_shared<vfs>(targetName, type::folder, current);
current->children[targetName] = newFolder;

static type folderType = type::folder;
cout << "folder created" << endl;
}