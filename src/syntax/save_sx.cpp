#include <iostream>
#include "include/syntaksis.h"
#include <fstream>

using std::cout;
using std::ofstream;
using std::endl;
using std::ifstream;
using std::cin;
using std::fstream;

void syntaksis::save() {
    syntax << "{" << endl;
    syntax << "\"sx_name\": \"" << sx_name << "\"," << endl;
    syntax << "\"create_folder\": \"" << create_folder << "\"," << endl;
    syntax << "\"move_folder\": \"" << move_folder << "\"," << endl;
    syntax << "\"list_folder\": \"" << list_folder << "\"," << endl;
    syntax << "\"curent_folder\": \"" << curent_folder << "\"" << endl;
    syntax << "}" << endl;
    syntax.close();
}