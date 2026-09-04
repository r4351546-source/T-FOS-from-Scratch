#include "include/shell.hpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

void shell::the_divius() {
    sh_name = "divius";
    the_shell = "@t-fos>>";
    cout << "search the packet..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "sucees! packet downloads" << endl;
    save();

}
