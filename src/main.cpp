
//the main header
#include "main.hpp"
//other libs

//1.folder shell
#include "shell/include/shell.hpp"
#include "shell/include/help.hpp"
#include "shell/include/syntaksis.h"

//2. shell/commahds
#include "shell/commands/include/body.h"

//3.src/
#include "whoami.hpp"
#include "the_shell_output.hpp"

//4.registration/
#include "registration/include/registration.hpp"

//5.tools
#include "tools/include/nio.hpp"

//other libs
#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>



using std::string;

int realize::program() {
    //strings
string input;
string version = "0.1(realize)";
//start

//1 os name
std::cout << "t-fos from scratch" << std::endl;
std::this_thread::sleep_for(std::chrono::seconds(1));

//2, version status
std::cout << "version: " << version << std::endl;
std::this_thread::sleep_for(std::chrono::milliseconds(750));

//3, arcitecture
std::cout << "create with C++ and module architecture" << std::endl;
int startSound = system("paplay assets/sounds/start.oga");

//struct obj creating
//1.help
hlp helper;
//2.shell
shell main_sh;
//3.filesystem
commands fs;
//4.whoami
who whom;
//5.output shell
out sh;
//6.user
registr user;
//7.nio
niofetch niofetch;
//8.syntax
syntaksis stx;


//start while
while(true) {
//input start
std::cout << sh.the_she << " ";
std::cin >> input;

//help
if(input == "help") {helper.hlp::help();}

//whoami
else if(input == "whoami") {whom.main();}

//------------------
//filesystem
//------------------
//curent folder;
else if(input == curent_folder) {fs.curent_folder();}

//create folder
else if(input == create_folder) {fs.create_folder();}

//list folder
else if(input == list_folder) {fs.list_folder();}

//move folder
else if(input == move_folder) {fs.move_to_folder();}
//-----------------
//end of filesystem
//-----------------

//nio
else if(input == "niofh") {niofetch.nio();}

//syntax mode
else if(input == "sx-mode") {stx.syntaksis_func();}

//shell mode
else if(input == "sh-mode") {main_sh.input();}

//---------------
//user settings
//---------------

//user added
else if(input == "reg") {user.user_add();}

//user renamed
else if(input == "renam_acc") {user.rename();}
//---------------
//end of user settings
//---------------

//exit
else if(input == "ex0") {
cout << "shutdown t-fos from scratch..." << endl;
break;
}

//errors
else {cout << "[ERROR]:command '" << input << "' type help for see commands" << endl;}

//ending
}
return 0;
}

int main() {
realize prog;
prog.program();
}
