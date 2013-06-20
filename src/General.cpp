/**
 * @file General.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include <iostream>

#include "SDL/SDL.h"

#include "../include/SSDL_General.hpp"

namespace SSDL {

    void General::Init() {
#ifdef DEBUG
        std::cout << "DEBUG: Init SDL Subsystems" << std::endl;
#endif
        if (SDL_Init(SDL_INIT_VIDEO) != 0) {
            std::cerr << "ERROR: Unable to initialize SDL: " << SDL_GetError() << std::endl;
            throw 1;
        }
        atexit(SDL_Quit);
    }

}

