#include "include/registration.hpp"
#include "filesystem/include/body.hpp"

#include <iostream>
#include <string>
#include <memory>
#include <random>
#include <algorithm>

std::string generate_uid() {
    usr x;
    static const std::string chars =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    static std::mt19937 gen(std::random_device{}());
    static std::uniform_int_distribution<> dist(
        0, chars.size() - 1
    );

    x.uid.reserve(12);

    for (int i = 0; i < 12; ++i) {
        x.uid += chars[dist(gen)];
    }

    return x.uid;
}


void funcs::adduser() {
    usr x;
    std::string check_password;

    std::cout << "Username(login): ";
    std::cin >> x.login;

    std::cout << "password: ";
    std::cin >> x.password;

    std::cout << "retry password: ";
    std::cin >> check_password;

    while(check_password != x.password) {
        std::cout << "password incorrect, retry: ";
        std::cin >> check_password;
    }
    
    auto root = std::make_shared<vfs>();
    //default folders
root->defFolders("files");
root->defFolders("data");
root->defFolders("development");
root->defFolders("usr");


//def files(docs)
auto documentation = root->defFiles("docs.tf");
documentation->content = {
    "Hi bro\n",
    "this documentataion of t-fos",
    "Terminal-Friendly Operating System",
    "but....",
    "whis not os, this os simulator",
    "but this have many features:\n",
    "1.working vfs, he supported files, folders, and also have system text editor",
    "teeps",
    "teeps — the terminal text editor in the t-fos",
    "hes have stable version(1.0.0) and stable work",
    "2.niofetch this is attempt to copy fastfetch but for",
    "t-fos",
    "3. user system, hes do bad(in october 8th), but im still rework",
    "4. pong, whis tool to output sound via command 'pong'",
    "5.syntax and shell mode",
    "whis also do bad, why?",
    "when im start do project, then im little know",
    "my first work in t-fos became shell, syntax, and user system",
    "because of im little know then, imn then write bad code",
    "i many times do refactoring and rewrite archtecture",
    "because of code be spaghetti",
    "what you can do in:",
    "shell mode(sh-mode): put various shells, what you want, im like dsh shell",
    "syntax mode(sx-mode): put various syntaxs: klike, linux, divius",
    "6.out, this command gives you change out your text, what you want",
    "7.whoami: whoami -u out username(login), whoami -t out your shell now, whoami -s out syntax",
    "8.ex0: shutdown but for t-fos\n",
    "for ", x.login
};

x.uid = generate_uid();
type usertype = type::user;
root->name = x.login;
root->parent = nullptr;
x.users.emplace(
        x.login,
        std::make_tuple(x.password, x.uid, usertype, root)
    );

} 
