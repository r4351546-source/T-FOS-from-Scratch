#include "include/funcs.hpp"
#include "include/body.hpp"

#include <iostream>

using std::cout;
using std::endl;

void commands::curent_folder() {
    std::vector<std::string> path;

    auto node = current;

    while (node != nullptr) {
        path.push_back(node->name);
        node = node->parent;
    }

    for (auto it = path.rbegin(); it != path.rend(); ++it) {
        std::cout << "/" << *it;
    }

    std::cout << '\n';
}
