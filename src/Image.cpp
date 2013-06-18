/**
 * \file Image.cpp
 *
 * \author Thomas Pointhuber
 *
 * \date 6/6/2013
 * \copyright GNU General Public License (GPL) 3.0
 */

#include "../include/Image.hpp"

#include "SDL/SDL.h"

#include <iostream>

namespace SDL {

    Image::Image() {
    }

    Image::Image(const Image& orig) {
    }

    Image::~Image() {
    }

    void Image::LoadBmp(const std::string Filepath) {
        SDL_Surface *temp;
        temp = SDL_LoadBMP(Filepath.c_str());

        //        std::cout << Filepath;

        if (temp == NULL) {
            //            printf("Unable to load bitmap: %s\n", SDL_GetError());
            throw 1;
        }

        SDL_FreeSurface(this->surface);

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

}
