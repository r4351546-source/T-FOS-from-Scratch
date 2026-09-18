#include "include/sounds.hpp"
#include <cstdlib>

int sounds::start() {
    
    return system("paplay src/assets/sounds/start.oga");
}