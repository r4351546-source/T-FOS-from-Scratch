#include "whoami.hpp"
#include <iostream>
#include <string>


using std::string;

void who::main() {
string input;
std::cin >> input;
//name
if(input == "-u") {u();}
//syntax
else if(input == "-s"){s();}
//shell
else if(input == "-t"){t();}
//else(output error)
else{std::cout << "[ERROR]: the command '" << input << "' does not exist, please type 'help' for see commands" << std::endl;}
}
