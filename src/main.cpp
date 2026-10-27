
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
#include "users/include/registration.hpp"

//tools

//nio
#include "tools/include/nio.hpp"
//help
#include "tools/include/help.hpp"
//outText
#include "tools/include/outText.hpp"
//text editor
#include "tools/include/teeps.hpp"

//other libs
#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <memory>


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

std::string dsh(vfs* current) {
    std::vector<std::string> path;
    vfs* node = current;
    while (node != nullptr) {
        path.push_back(node->name);
        node = node->parent;
    }

    std::string result;

    for (auto it = path.rbegin(); it != path.rend(); ++it) {
        result += "/" + *it;
    }

    return result;
}


int realize::program() {

    
    //strings
string input;
string version = "0.1";
//start

//for havent latency use threads for sounds

//start sound
std::thread soundStart(sounds::start);
soundStart.detach();
//1 os name
std::cout << "t-fos from scratch" << std::endl;
//2, version status
std::cout << "version: " << version << std::endl;
//3, arcitecture
std::cout << "create with C++ and module architecture" << std::endl;
std::cout << "dev linuxsoid" << std::endl;
std::cout << "simple terminal emulator" << std::endl;
std::cout << "type " << GREEN << "\"help\"" << RESET << " for a list of commands" << std::endl;
std::cout << "this is not really os! im not saying this" << std::endl;
std::cout << "source: https://github.com/r4351546-source/T-FOS-from-Scratch" << std::endl;

char rootsymbol = '%';

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
usr user;
//6.nio
niofetch niofetch;
//7.syntax
syntaksis stx;
//8. text editor
teeps txtd;


std::this_thread::sleep_for(std::chrono::milliseconds(1000));
//start while
while(true) {
    //audit of run t-fos
    if(run == false) {
        return 0;

    }

    /*
    shell output
    --------------
    */
    //shells

    //myy favourite, dsh
    if(sh_name == "dsh") {
        vfs* curr = current;
        std::cout << RED << x.login << RESET  << "@" << dsh(curr) << GREEN << "|" << rootsymbol << " " << RESET;
    }

    //basic
    if(sh_name == "basic") {
        std::cout << YELLOW << "> " << RESET;
    }

    if(sh_name == "smesh") {
        std::cout << RED << x.login << RESET << GREEN << "@t-fos-> " << RESET;
    }

    if(sh_name == "divius") {
        std::cout << GREEN << x.login << "@> " << RESET;
    }

    if(sh_name == "chsares") {
        std::cout << RED << "[" << x.login << RESET << CYAN << "]@command? " << RESET; 
    }

    if(sh_name == "wesh") {
        std::cout << BLUE << "terminal" << RESET << "t-fos-> ";
    }
    if(sh_name == "klike") {
        std::cout << YELLOW << x.login << RESET << CYAN << "~/ " << RESET;
    }
    if(sh_name == "sh") {
        std::cout << "t-fos>> "; 
    }

    /*
    shells module end 
    */

    /*root symbol(* in root and % in def user)*/
    if(x.root == true) {
    rootsymbol = '*';
    }
    else {
        rootsymbol = '%';
    }
    /*end of audit root symbol*/

    while (std::cin.peek() == ' ' ||
       std::cin.peek() == '\t') {
    std::cin.get();
    }

    if (std::cin.peek() == '\n') {
    std::cin.get();
    continue;
    }

    if (std::cin.eof()) {
        return 0;
    }
    

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

//remove folder
else if(input == remove_folder) {fs.remove();}

//hex folder address
else if(input == curent_folder + "$") {fs.folder_hex();}

//read file
else if(input == readfile) {fs.read();}

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
else if(input == "adduser") {funcs::adduser();}

//user switch
else if(input == "usersw") {funcs::switchUser();}

//user list 
else if(input == "userls") {funcs::userList();}

//root password 
else if(input == "rootset") {
    if(user.rootset == false) {
        funcs::makeroot();
    }
    else {
        std::cout << RED << "root password set now, you cant change root password" << RESET << std::endl;
    }
}

//root stats
else if(input == "rstats") {funcs::rootv();}
 
//---------------
//end of user settings
//---------------

//outText
else if(input == outText::command) {outText::textout();}

//out sounds 
else if(input == "pong") {soundsOut::sound();}

//teeps
else if(input == "teeps") {txtd.editor("","");}

//exit
else if(input == "ex0") {
    sounds::shutdown();
    std::cout << GREEN << "shutdown t-fos from scratch..." << RESET << std::endl;
    run = false;
}
else if(input == "cls") {
    std::system("clear");
}

//errors
else {
    std::thread sound(sounds::done);
    sound.detach();
    std::cout << RED << "[ERROR]:command '" << input << "' type help for see commands" << RESET << std::endl;
}

if (input != outText::command && input != "teeps") {
    std::cin.ignore(
        std::numeric_limits<std::streamsize>::max(),
        '\n'
    );
}
//ending
}
}



// int main

int main() {
realize prog;
prog.program();
}

