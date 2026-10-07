#include "include/sounds.hpp"
#include <cstdlib>

int sounds::shutdown() {
    return system("paplay assets/sounds/shutdown.wav");
}