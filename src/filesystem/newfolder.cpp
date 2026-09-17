#include "include/body.hpp"
#include "include/funcs.hpp"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

void commands::create_folder() {
string *targetName = new string;
std::cin >> *targetName;

folders* newFolder = new folders{*targetName, curent};
curent->children[*targetName] = newFolder;

cout << "folder created" << endl;

delete targetName;
}