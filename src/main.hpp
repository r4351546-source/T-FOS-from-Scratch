
//the header file for the realize main.cpp
#pragma once
#include <cstdlib>
#include <string>

//headers

//user
#include "registration/include/registration.hpp"
//shell
#include "shell/include/shell.hpp"
//syntax
#include "syntax/include/syntaksis.h"


//the struct for the realize main.cpp
struct realize {
int program();

};

namespace state {
	//user
	std::string log = login;
	std::string passwd = password;

	//shell
	std::string shellname = sh_name;
	std::string shellout = the_shell;

	//syntax
	std::string namesh = sh_name;

	std::string create = create_folder;
	std::string move = move_folder;
	std::string list = list_folder;
	std::string remove = move_folder;
	std::string current = curent_folder;

	
};
