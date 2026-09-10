#pragma once
#include <fstream>
#include <string>

//saving file
extern std::ofstream savefile("vfs.json");

struct commands {
    
   int thenum = 1;
void create_folder();
void move_to_folder();
void list_folder();
void curent_folder();
void folder_hex();



};