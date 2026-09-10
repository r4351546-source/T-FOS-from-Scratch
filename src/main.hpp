
//the header file for the realize main.cpp
#pragma once
#include <cstdlib>

//the struct for the realize main.cpp
struct realize {
int program();

int StartSound = system("paplay assets/sounds/start.oga");
int EndSound = system("paplay assets/sounds/shutdown.wav");
int DoneSound = system("paplay assets/sounds/done.oga");

int pong1 = system("paplay assets/sounds/pong1.oga");
int pong2 = system("paplay assets/sounds/pong2.oga");
int pong3 = system("paplay assets/sounds/pong3.oga");
int pong4 = system("paplay assets/sounds/pong4.oga");
};
