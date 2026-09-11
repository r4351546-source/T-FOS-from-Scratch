#pragma once
#include <string>
#include <fstream>

inline std::string login = "user";
inline std::string password;
inline std::string check_password;

extern std::ofstream file("reg.json");
struct registr {

        void user_add();
        void rename();

        void save();
};
