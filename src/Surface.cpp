/*
 * File:   Surface.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 18:30
 */

#include "../include/Surface.hpp"
#include "../include/Color.hpp"
#include "../include/Image.hpp"

#include "SDL/SDL.h"

namespace SDL {

    Surface::Surface() {
        this->surface = NULL;
    }

    Surface::Surface(const Surface& orig) {
        *this = orig; // FIXME: Not Tested, correct?
    }

    Surface::~Surface() {
        SDL_FreeSurface(this->surface);
    }

    Surface& Surface::operator=(const Surface& orig) {
        if (this == &orig) {
            return *this;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        SDL_BlitSurface(orig.surface, NULL, this->surface, NULL);
        return *this;
    }

    SDL_Surface* Surface::GetSurface() const {
        return this->surface;
    }
}