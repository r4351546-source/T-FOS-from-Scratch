#include "include/registration.hpp"
#include <iostream>
#include <string>

using namespace std;

void registr::rename() {
cout << "for rename user enter password" << endl;
cout << ">> ";
cin >> check_password;
while(check_password != password) {
cout << "password don't correct, try again" << endl << ">> ";
cin >> check_password;
}
cout << "enter new login" << endl;
cout << ">> ";
cin >> login;
} 
