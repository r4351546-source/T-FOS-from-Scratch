#include "include/registration.hpp"
#include "filesystem/include/body.hpp"
#include <iostream>
#include <string>

using namespace std;

void funcs::adduser() {
    string check_password;
    usr x;
cout << "for rename user enter password" << endl;
cout << ">> ";
cin >> check_password;
while(check_password != x.password) {
cout << "password don't correct, try again" << endl << ">> ";
cin >> check_password;
}
cout << "enter new login" << endl;
cout << ">> ";
cin >> x.login;
} 
