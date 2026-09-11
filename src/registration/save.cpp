#include "include/registration.hpp"

void registr::save() {
    file << "{\n\t\"login\": \"" << login << "\",\n\t\"password\": \"" << password << "\"\n}";
}