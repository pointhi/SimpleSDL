/**
 * @file General.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include "SDL/SDL.h"

#include "../include/SSDL_General.hpp"

namespace SSDL {

    void General::Init() {
        if (SDL_Init(SDL_INIT_VIDEO) != 0) {
            fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
            throw 1;
        }
        atexit(SDL_Quit);
    }

}

