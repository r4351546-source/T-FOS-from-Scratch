#include "include/funcs.hpp"
#include "include/body.hpp"

#include <iostream>

using std::cout;
using std::endl;

void commands::curent_folder() {
auto dirnow = current->parent->name;
cout << "curent folder: " << dirnow << endl;

}
