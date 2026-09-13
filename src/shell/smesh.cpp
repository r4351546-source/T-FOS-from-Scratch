//my header
#include "include/shell.hpp"
#include "registration/include/registration.hpp"

//other libs
#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void shell::smesh() {
    sh_name = "smesh";
the_shell = login + "@t-fos->";
cout << "search packet..." << endl;
this_thread::sleep_for(chrono::seconds(5));
cout << "sucees! packet download" << endl;

}
