#include "include/sounds.hpp"
#include "include/bodies.hpp"

int sounds::done() {
    return system("paplay src/assets/sounds/done.oga");
}