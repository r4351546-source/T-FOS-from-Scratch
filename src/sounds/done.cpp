#include "include/sounds.hpp"
#include <cstdlib>

int sounds::done() {
    return system("paplay src/assets/sounds/done.oga");
}