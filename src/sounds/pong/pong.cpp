#include "pong.hpp"
#include "src/sounds/include/sounds.hpp"

#include <iostream>
#include <string>

int soundsOut::sound() {    
     std::string sound;
     std::getline(std::cin, sound);

     //if start sound
     if(sound == "start") {sounds::start();}
    //if done sound
    else if(sound == "done") {sounds::done();}
    //if shutdown sound
    else if(sound == "shutdown") {sounds::shutdown();}

    //pongs

    //pong 1
    else if(sound == "1") {sounds::pong1();}
    //pong 2
    else if(sound == "2") {sounds::pong2();}
    //pong 3
    else if(sound == "3") {sounds::pong3();}
    //pong 4
    else if(sound == "4") {sounds::pong4();}

}