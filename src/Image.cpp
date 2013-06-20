/**
 * @file Image.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include <iostream>

#include "SDL/SDL.h"

#include "../include/SSDL_Image.hpp"

namespace SSDL {

    Image::Image() {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::Image" << std::endl;
#endif
    }

    Image::Image(const Image& orig) {
    }

    Image::~Image() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: SSDL::Image" << std::endl;
#endif
    }

    void Image::LoadBmp(const std::string Filepath) {
#ifdef DEBUG
        std::cout << "DEBUG: Load Image: " << Filepath << std::endl;
#endif
        SDL_Surface *temp;
        temp = SDL_LoadBMP(Filepath.c_str());

        if (temp == NULL) {
            std::cerr << "ERROR: Unable to load bitmap: " << SDL_GetError() << std::endl;
            throw 1;
        }

        SDL_FreeSurface(this->surface);

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

}
