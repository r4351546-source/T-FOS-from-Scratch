
#include <string>
#include "shell/include/shell.hpp"
#include "registration/include/registration.hpp"
#include "the_shell_output.hpp"

void out::output(std::string the_sh) {
    std::string out1 = the_shell;
    std::string out2 = login;
    
    if(out1 == "terminal@root~r-fos>" || out1 == ">" || out1 == "t-fos->" || out1 == "t-fos@root~/") {
        the_sh = out1;
        the_sh = the_she;
    }
    else {
    the_sh = out2 + out1;
    the_sh = the_she;
    }
    the_she = the_sh;
}
