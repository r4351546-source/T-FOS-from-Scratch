#include "include/help.hpp"
#include "include/syntaksis.h"
#include <iostream>


void hlp::help() {
    //start
cout << "->help menu" << endl << endl << endl;
//filesystem help
cout << "1.filesystem navigation->>" << endl;
cout << "for the create folder type: " << create_folder << " name" << endl;
cout << "for the move to folder type: " << move_folder << " name" << endl;
cout << "for the see all in folder type: " << list_folder << endl;
cout << "for the see curent folder type:" << curent_folder << endl << endl;
//account help
cout << "2.account->>" << endl;
cout << "for create account type: reg" << endl;
cout << "for the rename acoount type: renam_acc" << endl << endl;
//information
cout << "3.info->>" << endl;
cout << "for see your shell type: whoami -t" << endl;
cout << "for see your name type: whoami -u" << endl;
cout << "for see your syntax type: whoami -s" << endl;
//src/tools/
cout << "4.tools->>" << endl;
cout << "for see custom fetch type: niofh" << endl << endl;
//customize
cout << "5.customize->>" << endl;
cout << "for choose shell type: sh-mode" << endl;
cout << "for choose your syntax type: sx-mode" << endl;


}
