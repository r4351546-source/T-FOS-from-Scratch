//header file for sounds modules
#pragma once

//main header
#include "bodies.hpp"

//namespace for sounds
namespace sounds {
    inline used_sounds sound;
    //start and shutdown functions sounds
    inline int start();
    inline int shutdown();

    //done or end
    inline int done();

    //for command pong
    inline int pong1();
    inline int pong2();
    inline int pong3();
    inline int pong4();

}