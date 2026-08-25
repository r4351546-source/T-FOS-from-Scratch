#include "include/shell.hpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void shell::chsares() {
    sh_name = "chsares";
the_shell = "@main/shell/chsares-h#->";
cout << "search packet 'chsares-h'..." << endl;
this_thread::sleep_for(chrono::seconds(3));
cout << "sucees! packet download" << endl;
}
