/*
 * File:   Time.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:06
 */

#include "../include/Time.hpp"

#include "SDL/SDL.h"

namespace SDL {

    void Time::Delay(unsigned int Time) {
        SDL_Delay(Time);
    }

}