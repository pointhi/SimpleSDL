/**
 * @file Surface.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include <iostream>

#include "SDL/SDL.h"

#include "../include/SSDL_Surface.hpp"
#include "../include/SSDL_Color.hpp"
#include "../include/SSDL_Image.hpp"

namespace SSDL {

    Surface::Surface() {
        this->surface = NULL;
        std::cout << "Constructor: Surface" << std::endl;
    }

    Surface::Surface(const Surface& orig) {
        *this = orig; // FIXME: Not Tested, correct?
    }

    Surface::~Surface() {
        std::cout << "Destructor: Surface" << std::endl;
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

    void Surface::NewSurface(const int width, const int heigth) {
        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        this->surface = SDL_CreateRGBSurface(SDL_SWSURFACE, width, heigth, 16, 0, 0, 0, 0);
    }

    void Surface::SetTransparentColor(const SSDL::Color Color) {
        SDL_SetColorKey(this->surface, SDL_SRCCOLORKEY, SDL_MapRGB(this->surface->format, Color.GetRed(), Color.GetGreen(), Color.GetBlue()));
    }
}