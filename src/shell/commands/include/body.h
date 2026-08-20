#pragma once
#include <string>
#include <map>

struct commands {
    
   int thenum = 1;
void create_folder();
void move_to_folder();
void list_folder();

};


struct folders {
    std::string name;
        folders* parent = nullptr;
        std::map<std::string, folders*> children;
};
folders root{"/", nullptr};
folders* curent = &root;
