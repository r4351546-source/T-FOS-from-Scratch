#include "include/sounds.hpp"
#include <cstdlib>

int sounds::shutdown() {
    return system("paplay src/assets/sounds/shutdown.wav");
}