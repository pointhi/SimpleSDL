/**
 * @file Time.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include "../include/Time.hpp"

#include "SDL/SDL.h"

namespace SSDL {

    void Time::Delay(unsigned int Time) {
        SDL_Delay(Time);
    }

    long int Time::GetTicks() {
        return SDL_GetTicks();
    }

}