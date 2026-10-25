#include "include/funcs.hpp"
#include "include/body.hpp"

#include <iostream>

using std::cout;
using std::endl;

void commands::curent_folder() {
    std::string path;
    vfs* node = current;

    while (node != nullptr) {
        path = node->name + path;
        node = node->parent;
    }
    cout << path << endl;

}
