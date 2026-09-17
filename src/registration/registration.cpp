#include "include/registration.hpp"
#include <iostream>



void registr::user_add() {
using namespace std;
cout << "login for new user: ";
cin >> login;
cout << "password for user " << login << ": ";
cin >> password;
cout << "again: ";
cin >> check_password;
while(check_password != password) {
cout << "password don't correct, try again: ";
cin >> check_password;
}
cout << "user " << login << " added" << endl;

} 
