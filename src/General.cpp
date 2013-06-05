/* 
 * File:   General.cpp
 * Author: thomas
 * 
 * Created on 5. Juni 2013, 18:04
 */

#include "../include/General.hpp"
#include "SDL/SDL.h"

namespace SDL {

void General::Init()
        {
        if (SDL_Init(SDL_INIT_VIDEO) != 0)
                {
                fprintf(stderr, "Unable to initialize SDL: %s\n", SDL_GetError());
                throw 1;
                }
        atexit(SDL_Quit);
        }
    
}

