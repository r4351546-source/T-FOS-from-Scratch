#include "include/shell.hpp"
#include <iostream>
#include <string>

using namespace std;


void shell::input() {
    string packet_manager;
string input_log;
    string password;
    string shell;
    cout << "shell configuration mode" << endl << endl << "shells:" << endl;
    //divius shell
    //1.>>
    cout << "1.for shell divius type 'sp-tf install divius-shell'" << endl;
    cout << "-.shell: user@t-fos>>" << endl << endl;
    //chsares-h shell
    //2.>>
    cout << "2.for shell chsares-h type 'sp-tf install chsares-h'" << endl;
    cout << "-.shell: user@main/shell/chsares-h#->" << endl << endl;
    //wesh shell
    //3.>>
    cout << "3.for wesh shell type 'sp-tf install wesh-bin.k'" << endl;
    cout << "-.shell: terminal@root~t-fos>" << endl << endl; 
    //smesh shell
    //4.>>
    cout << "4.for smesh-shell type 'sp-tf install smesh'" << endl;
    cout << "-.shell: t-fos->" << endl << endl;
    //basic shell
    //5.>>
    cout << "5.for basic shell type 'sp-tf install basic-shell'" << endl;
    cout << "-.shell: >" << endl << endl;
    //klike shell
    //6.>>
    cout << "6.for klike-shell type 'sp-tf install klike'" << endl;
    cout << "-.shell: t-fos@root~/" << endl << endl;
    
    //input
    cin >> packet_manager;

    if(packet_manager == "sp-tf") {
        cin >> input_log;
        if(input_log == "install") {
            cin >> shell;
            //divius
            if(shell == "divius-shell") {the_divius();}
            //chsares-h shell
            else if(shell == "chsares-h") {chsares();}
            //wesh shell
            else if(shell == "wesh-bin.k") {wesh();}
            //smesh shell
            else if(shell == "smesh") {smesh();}
            //basic shell
            else if(shell == "basic-shell") {basic();}
            //klike shell
            else if(shell == "klike") {klike();}
            else {
                cout << "[ERROR]" << endl;
            }
        }
        else {
            cout << "[ERROR]:don't using command" << endl;
        }
    }
    else {
        cout << "[ERROR]:command dont using" << endl;
    }
}
