//header file for sounds modules
#pragma once

//main header
#include "main.hpp"

//namespace for sounds
namespace sounds {
    realize sound;
    //start and shutdown functions sounds
    int start();
    int shutdown();

    //done or end
    int done();

    //for command pong
    int pong1();
    int pong2();
    int pong3();
    int pong4();

}