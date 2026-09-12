#include "include/help.hpp"
#include "syntax/include/syntaksis.h"
#include <iostream>
#include "registration/include/registration.hpp"

//colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"


using std::cout;
using std::endl;

void hlp::help() {
    //start
cout << "->help menu" << endl << endl << endl;
//filesystem help
cout << MAGENTA << "1.filesystem navigation->>" << RESET << endl;
cout << "for the create folder type: " << create_folder << " name" << endl;
cout << "for the move to folder type: " << move_folder << " name" << endl;
cout << "for the see all in folder type: " << list_folder << endl;
cout << "for the see curent folder type:" << curent_folder << endl;
cout << "for the see folder address type: " << curent_folder << "$" << endl;
cout << "for the remove folder type: " << remove_folder << " name(DONT TYPE: " << remove_folder << " system/" << login << "/)" << endl << endl;
//account help
cout << RED << "2.account->>" << RESET << endl;
cout << "for create account type: reg" << endl;
cout << "for the rename acoount type: renam_acc" << endl << endl;
//information
cout << GREEN << "3.info->>" << RESET << endl;
cout << "for see your shell type: whoami -t" << endl;
cout << "for see your name type: whoami -u" << endl;
cout << "for see your syntax type: whoami -s" << endl;
//src/tools/
cout << BLUE << "4.tools->>" << RESET << endl;
cout << "for see custom fetch type: niofh" << endl;
cout << "for print your text type: out text" << endl << endl;
//customize
cout << YELLOW << "5.customize->>" << RESET << endl;
cout << "for choose shell type: sh-mode" << endl;
cout << "for choose your syntax type: sx-mode" << endl;


}
