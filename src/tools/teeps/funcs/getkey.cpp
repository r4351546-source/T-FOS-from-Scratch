#include "tools/include/teeps.hpp"
#include <termios.h>
#include <unistd.h>

char teeps::getkey()
{
    char c;

    read(STDIN_FILENO, &c, 1);

    return c;
}