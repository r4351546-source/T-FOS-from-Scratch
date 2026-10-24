#include "include/registration.hpp"
#include "filesystem/include/body.hpp"
#include <iostream>
#include <string>


void funcs::adduser() {
    usr x;
    std::string check_password;
using namespace std;
cout << "login for new user: ";
cin >> x.login;
cout << "password for user " << x.login << ": ";
cin >> x.password;
cout << "again: ";
cin >> check_password;
while(check_password != x.password) {
cout << "password don't correct, try again: ";
cin >> check_password;
}
cout << "user " << x.login << " added" << endl;

} 
