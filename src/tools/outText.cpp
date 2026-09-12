#include "include/outText.hpp"
#include "syntax/include/syntaksis.h"

#include <string>
#include <iostream>

void outText::textout() {
    std::getline(std::cin, text);
    std::cout << text << std::endl;
}