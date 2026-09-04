#include "include/shell.hpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void shell::klike() {
sh_name = "klike";
the_shell = "t-fos@root~/";
cout << "search packet..." << endl;

this_thread::sleep_for(chrono::seconds(6));
cout << "sucees! packet download" << endl;
save();

}
