#pragma once
#include <string>
#include <fstream>


inline std::string sx_name = "divius";
inline std::string create_folder = "folcr";
inline std::string move_folder = "cds";
inline std::string list_folder = "lsc";
inline std::string curent_folder = "crt";

extern std::ofstream syntax("syntax.json");


struct syntaksis {
    void syntaksis_func(); 
    void save();

};
