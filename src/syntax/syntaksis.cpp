#include <iostream>
#include <string>
#include "include/syntaksis.h"
#include <fstream>

using namespace std;

void syntaksis::syntaksis_func() {
    string input;
    string syntaks;
    cout << "syntaksis mode " << endl;
    cout << "1.divius syntaksis: folcr, cds, lsc, crt" << endl;
    cout << "2.linux syntaksis: mkdir, cd, ls,  pwd" << endl;
    cout << "3.klike syntaksis: nwfol, spc, ldc, scr" << endl;
    cout << "-- for enable your syntaks logic type: mq-enable name" << endl;


    while(true) {
    cin >> input;

    if(input == "mq-enable") {
        cin >> syntaks;
        if(syntaks == "divius") {
            cout << "syntaksis '" << syntaks << "' enable now" << endl;
            sx_name = "divius";
            create_folder = "folcr";
            list_folder = "lsc";
            move_folder = "cds";
            curent_folder = "crt";
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
            save();
            break;
        }
        else {cout << "[ERROR]: incorrect service" << endl;}
    }
    else {cout << "[ERROR]: incorrect command" << endl;}
    }

}
