#include "include/shell.hpp"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
string the_shell;

void shell::input() {
    string packet_manager;
string input_log;
    string password;
    string shell;
    cout << "-------}shell realise mode{------" << endl << endl;
    cout << "1.for shell divius type 'sp-tf install divius-shell'" << endl;
    cout << "-.shell: user@[<T-FOS==]|type> " << endl << endl;
    cout << "2.for shell chsares-h type 'sp-tf install chsares-h'" << endl;
    cout << "-.shell: //:>>" << endl << endl;
    cout << "3.for wesh shell type 'sp-tf install wesh-bin.k'" << endl;
    cout << "-.shell: user[T-FOS]:>>>" << endl << endl; 
    cout << "4.for smesh-shell type 'sp-tf install smesh'" << endl;
    cout << "-.shell: type:|>" << endl << endl;
    cout << "5.for basic shell type 'sp-tf install basic-shell'" << endl;
    cout << "-.shell: user>>" << endl << endl;
    cout << "6.for klike-shell type 'sp-tf install klike'" << endl;
    cout << "-.shell: user}T-FOS:main-#~> " << endl << endl;
    cin >> packet_manager;
    if(packet_manager == "sp-tf") {
        cin >> input_log;
        if(input_log == "install") {
            cin >> shell;
            if(shell == "divius-shell") {
                cout << "search the packet..." << endl;

                this_thread::sleep_for(chrono::seconds(3));
                the_shell = "@[<T-FOS==]|type>";
                cout << "the packet downloads" << endl;
            }
            else if(shell == "chsares-h") {
                cout << "search the packet..." << endl;

                this_thread::sleep_for(chrono::seconds(1));
                the_shell = "//:>>";
                cout << "the packet downloads" << endl;
            }
            else if(shell == "wesh-bin.k") {
                cout << "search the packet...";

                this_thread::sleep_for(chrono::seconds(4));
                the_shell = "user[T-FOS]:>>>";
                cout << "the packet downloads" << endl;
            }
            else if(shell == "smesh") {
                cout << "search packet..." << endl;

                this_thread::sleep_for(chrono::seconds(2));
                the_shell = "type:|> ";
                cout << "the packet downloads" << endl;
            }
            else if(shell == "basic-shell") {
                cout << "search the packets..." << endl;

                this_thread::sleep_for(chrono::seconds(1));
                the_shell = ">>";
                cout << "the packets downloads" << endl;
            }
            else if(shell == "klike") {
                cout << "search the packet...." << endl;

                this_thread::sleep_for(chrono::seconds(5));
                the_shell = "}T-FOS:main-#~>";
                cout << "the packets downloads" << endl;
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
