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
std::cin >> targetName;

auto newFolder = std::make_shared<folders>(targetName, curent);
curent->children[targetName] = newFolder;

cout << "folder created" << endl;
}