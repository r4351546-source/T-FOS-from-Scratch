//header
#include "include/shell.hpp"
//other
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void shell::basic() {
the_shell = ">";
cout << "search packet..." << endl;
this_thread::sleep_for(chrono::seconds(1));
cout << "sucees! packet download" << endl;
}

