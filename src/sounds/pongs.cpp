#include "include/sounds.hpp"
#include <cstdlib>

int sounds::pong1() {
    return system("paplay assets/sounds/pong1.oga");
    
}

int sounds::pong2() {
    return system("paplay assets/sounds/pong2.oga");
}

int sounds::pong3() {
    return system("paplay assets/sounds/pong3.oga");
}

int sounds::pong4() {
    return system("paplay assets/sounds/pong4.oga");
}