//header
#include "include/shell.hpp"
//other libs
#include <iostream>
#include <string>

#include <thread>
#include <chrono>

//namespace 
using namespace std;

//func wesh shell
void shell::wesh() {
    //func start
    sh_name = "wesh";
the_shell = "terminal@root~t-fos>";
cout << "search packet..." << endl;

this_thread::sleep_for(chrono::seconds(1));
cout << "sucees! packet download" << endl;
save();
//end wesh func
}
