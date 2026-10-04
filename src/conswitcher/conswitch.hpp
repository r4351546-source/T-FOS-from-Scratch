#pragma once

/*what the fuck this?
this alternative if-else or switch-case 
but for strings 
AND FOR FUNCTIONS VARIABLE "void()"
!!!other dont supports this, but this is a simple implementation of it
---------------
-@-october 3th-
*/

#include <string>
#include <map>
#include <functional>
#include <iostream>
/*also his dont have a default case / else*/

#include "shell/include/shell.hpp"

struct conswithcher {

    std::map<std::string, std::function<void()>> boxvoid;
    std::map<std::string, std::function<int()>> boxint;
    std::map<std::string, std::string> other;
    
    /*4th october:
    now conswitch support default / else*/

    void conSwitch(const std::string& c) {
        auto noreturn = boxvoid.find(c);
        auto integer = boxint.find(c);
        
        if (noreturn != boxvoid.end()) {
            noreturn->second();
        }

        else if(integer != boxint.end()) {
            std::cout << integer->second() << std::endl;
        }

        else {
            other[c] = sh_name + ": command not found:" + c;
            std::cout << other[c] << std::endl;
        }

    }

};
/* october 4th, namespace for realize all boxs
--------
*/
namespace cswitch {
    /*realize in /conswither/main.cpp */
    void boxs(std::string command);
};

/*this is a simple parser for string-based switch statements*/
