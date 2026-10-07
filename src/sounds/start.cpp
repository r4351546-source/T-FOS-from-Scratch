#include "include/sounds.hpp"
#include <cstdlib>

int sounds::start() {
    
    return system("paplay assets/sounds/start.oga");
}