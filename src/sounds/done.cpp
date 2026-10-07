#include "include/sounds.hpp"
#include <cstdlib>

int sounds::done() {
    return system("paplay assets/sounds/done.oga");
}