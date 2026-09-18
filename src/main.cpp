
//the main header
#include "main.hpp"
//other libs

//shell
#include "shell/include/shell.hpp"

//filesystem
#include "filesystem/include/funcs.hpp"

//whoami
#include "whoami/whoami.hpp"

//syntax
#include "syntax/include/syntaksis.h"

//sounds
#include "sounds/include/sounds.hpp"
//pong function
#include "sounds/pong/pong.hpp"

//registration
#include "registration/include/registration.hpp"

//tools

//nio
#include "tools/include/nio.hpp"
//help
#include "tools/include/help.hpp"
//outText
#include "tools/include/outText.hpp"

//other libs
#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>

//color
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

using std::string;

int realize::program() {
    //strings
string input;
string version = "0.1";


//start

//start sound
sounds::start();
//1 os name
std::cout << "t-fos from scratch" << std::endl;
//2, version status
std::cout << "version: " << version << std::endl;
//3, arcitecture
std::cout << "create with C++ and module architecture" << std::endl;
std::cout << "dev linuxsoid" << std::endl;
std::cout << "simple terminal emulator" << std::endl;
std::cout << "type" << GREEN << "\"help\"" << RESET << " for a list of commands" << std::endl;
std::cout << "this is not really os! im not saying this" << std::endl;
std::cout << "source: https://github.com/r4351546-source/T-FOS-from-Scratch" << std::endl;


//struct obj creating
//1.help
hlp helper;
//2.shell
shell main_sh;
//3.filesystem
commands fs;
//4.whoami
who whom;
//5.user
registr user;
//6.nio
niofetch niofetch;
//7.syntax
syntaksis stx;



std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//start while
while(true) {
    //audit of run t-fos
    if(run == false) {
        return 0;

    }
//input start
std::cout << the_shell;
std::getline(std::cin, input);

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

//remove folder
else if(input == remove_folder) {fs.remove();}

//hex folder address
else if(input == curent_folder + "$") {fs.folder_hex();}

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

//outText
else if(input == outText::command) {outText::textout();}

//out sounds 
else if(input == "pong") {soundsOut::sound();}

//exit
else if(input == "ex0") {
    sounds::shutdown();
    std::cout << GREEN << "shutdown t-fos from scratch..." << RESET << std::endl;
    run = false;
}

//errors
else {
    sounds::done();
    std::cout << RED << "[ERROR]:command '" << input << "' type help for see commands" << RESET << std::endl;
}

//ending
}
return 0;
}

int main() {

realize prog;
prog.program();
}

