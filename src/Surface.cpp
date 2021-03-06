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
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::Surface" << std::endl;
#endif
    }

    Surface::Surface(const Surface& orig) {
        *this = orig; // FIXME: Not Tested, correct?
    }

    Surface::~Surface() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: SSDL::Surface" << std::endl;
#endif
        SDL_FreeSurface(this->surface);
    }

    Surface& Surface::operator=(const Surface& orig) {
        if (this == &orig) {
            return *this;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        this->NewSurface(orig.GetSurface()->w, orig.GetSurface()->h);

        SDL_BlitSurface(orig.GetSurface(), NULL, this->surface, NULL);
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

    SSDL::Surface Surface::CutOutSurface(const int x1, const int y1, const int x2, const int y2) {
        // Part of the bitmap that we want to draw
        SDL_Rect source;
        source.x = x1;
        source.y = y1;
        source.w = x2;
        source.h = y2;

        SSDL::Surface returnSurface;

        returnSurface.NewSurface(x2 - x1, y2 - y1);

        SDL_BlitSurface(this->surface, &source, returnSurface.GetSurface(), NULL);

        return returnSurface;
    }
}