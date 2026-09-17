#pragma once
#include <cstdlib>

struct used_sounds {
    int StartSound = system("paplay src/assets/sounds/start.oga");
    int EndSound = system("paplay src/assets/sounds/shutdown.wav");
    int DoneSound = system("paplay src/assets/sounds/done.oga");
    
    int pong1 = system("paplay src/assets/sounds/pong1.oga");
    int pong2 = system("paplay src/assets/sounds/pong2.oga");
    int pong3 = system("paplay src/assets/sounds/pong3.oga");
    int pong4 = system("paplay src/assets/sounds/pong4.oga");
};