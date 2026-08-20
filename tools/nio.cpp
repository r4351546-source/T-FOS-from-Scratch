#include <iostream>
#include "include/nio.hpp"

void niofetch::nio() {
    
    #define RESET   "\033[0m"
    #define GREEN   "\033[1;32m"
    #define CYAN    "\033[1;36m"
    #define YELLOW  "\033[1;33m"
    #define BLUE    "\033[1;34m"
    #define MAGENTA "\033[1;35m"

    std::cout << CYAN << "  ████████  ████████ " << GREEN << "  root" << RESET << "@" << GREEN << "tfos\n";
    std::cout << CYAN << "     ██     ██       " << RESET << "  -------------\n";
    std::cout << CYAN << "     ██     ██████   " << YELLOW << "  OS: " << RESET << "T-FOS From Scratch\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Shell: " << RESET << "TH-Shell\n";
    std::cout << CYAN << "     ██     ██       " << YELLOW << "  Host: " << RESET << "emulator\n";
    std::cout << CYAN << "                     " << YELLOW << "  Architecture: " << RESET << "C++\n\n";
    
    
    std::cout << "  " << "███" << GREEN << "███" << YELLOW << "███" << BLUE << "███" << MAGENTA << "███" << CYAN << "███" << RESET << "\n\n";
}
