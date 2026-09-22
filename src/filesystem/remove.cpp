//headers
#include "include/funcs.hpp"
#include "include/body.hpp"
#include "registration/include/registration.hpp"
#include "sounds/include/sounds.hpp"

//libs
#include <iostream>
#include <string>

//colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"

//not using namespace std;
using std::string;
using std::cout;
using std::endl;
using std::cin;

void commands::remove() {
    std::string foldername;

    std::getline(std::cin, foldername);

    if (curent->children.find(foldername) != curent->children.end()) {
        curent->children.erase(foldername); 
        cout << GREEN << "Folder '" << foldername << "' removed successfully." << RESET << endl;

    }
    else if(foldername == "system/" + login) {
        cout << RED << "You cannot remove your own system folder." << RESET << endl;
    }    
    else {
        sounds::done();
        cout << RED << "Folder '" << foldername << "' does not exist in the current directory." << RESET << endl;
    }
    

}