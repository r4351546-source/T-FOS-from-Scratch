#pragma once
#include <string>
#include <fstream>

using namespace std;
inline string sx_name = "divius";
inline string create_folder = "folcr";
inline string move_folder = "cds";
inline string list_folder = "lsc";
inline string curent_folder = "crt";

extern std::ofstream syntax("syntax.json");


struct syntaksis {
    void syntaksis_func(); 
    void save();

};
