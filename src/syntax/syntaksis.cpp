#include <iostream>
#include <string>
#include "include/syntaksis.h"
#include <fstream>

//colors
#define RESET   "\033[0m"
#define RED     "\033[31m"

using namespace std;

void syntaksis::syntaksis_func() {
    string input;
    string syntaks;
    cout << "syntaksis mode " << endl;
    cout << "1.divius syntaksis: folcr, cds, lsc, crt, erase" << endl;
    cout << "2.linux syntaksis: mkdir, cd, ls,  pwd, rm" << endl;
    cout << "3.klike syntaksis: nwfol, spc, ldc, scr, delq" << endl;
    cout << "-- for enable your syntaks logic type: mq-enable name" << endl;


    while(true) {
    getline(cin, input);

    if(input == "mq-enable") {
        getline(cin, syntaks);
        if(syntaks == "divius") {
            cout << "syntaksis '" << syntaks << "' enable now" << endl;
            sx_name = "divius";
            create_folder = "folcr";
            list_folder = "lsc";
            move_folder = "cds";
            curent_folder = "crt";
            remove_folder = "erase";
            save();
            break;
        }
        else if(syntaks == "linux") {
            cout << "syntaksis '" << syntaks << "' enable now" << endl;
            sx_name = "linux";
            create_folder = "mkdir";
            list_folder = "ls";
            move_folder = "cd";
            curent_folder = "pwd";
            remove_folder = "rm";
            save();
            break;
        }
        else if(syntaks == "klike") {
            cout << "syntaksis '" << syntaks << "' enable now" << endl;
            sx_name = "klike";
            create_folder = "nwfol";
            list_folder = "ldc";
            move_folder = "cps";
            curent_folder = "scr";
            remove_folder = "delq";
            save();
            break;
        }
        else {cout << RED << "[ERROR]: incorrect service" << RESET << endl;}
    }
    else {cout << RED << "[ERROR]: incorrect command" << RESET << endl;}
    }

}
