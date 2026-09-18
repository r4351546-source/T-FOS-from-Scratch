#include "include/sounds.hpp"
#include "include/bodies.hpp"

used_sounds sound;

int sounds::pong1() {
    return system("paplay src/assets/sounds/pong1.oga");
    
}

int sounds::pong2() {
    return system("paplay src/assets/sounds/pong2.oga");
}

int sounds::pong3() {
    return system("paplay src/assets/sounds/pong3.oga");
}

int sounds::pong4() {
    return system("src/assets/sounds/pong4.oga");
}