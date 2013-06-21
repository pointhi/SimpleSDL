/**
 * @file Image.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "../include/SSDL_Image.hpp"

namespace SSDL {

    Image::Image() {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::Image" << std::endl;
#endif
    }

    Image::Image(const std::string Filepath) {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::Image" << std::endl;
#endif
        this->LoadImage(Filepath);
    }

    Image::Image(const Image& orig) {
    }

    Image::~Image() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: SSDL::Image" << std::endl;
#endif
    }

    void Image::LoadImage(const std::string Filepath) {

        unsigned int found = Filepath.find_last_of(".");
        std::string FileType = Filepath.substr(found + 1);

        if (FileType == "jpg" || FileType == "jpeg") {
            this->LoadJpg(Filepath);
        } else if (FileType == "png") {
            this->LoadPng(Filepath);
        } else if (FileType == "bmp") {
            this->LoadBmp(Filepath);
        } else if (FileType == "gif") {
            this->LoadGif(Filepath);
        } else {
            std::cerr << "ERROR: Unknow File-Type: " << FileType << std::endl;
            throw 2;
        }
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
        this->surface = NULL;

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

    void Image::LoadPng(const std::string Filepath) {
#ifdef DEBUG
        std::cout << "DEBUG: Load Image: " << Filepath << std::endl;
#endif
        SDL_Surface *temp;
        SDL_RWops *rwop;

        rwop = SDL_RWFromFile(Filepath.c_str(), "rb");
        temp = IMG_LoadPNG_RW(rwop);

        if (temp == NULL) {
            std::cerr << "ERROR: Unable to load bitmap: " << SDL_GetError() << std::endl;
            throw 1;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

    void Image::LoadJpg(const std::string Filepath) {
#ifdef DEBUG
        std::cout << "DEBUG: Load Image: " << Filepath << std::endl;
#endif
        SDL_Surface *temp;
        SDL_RWops *rwop;

        rwop = SDL_RWFromFile(Filepath.c_str(), "rb");
        temp = IMG_LoadJPG_RW(rwop);

        if (temp == NULL) {
            std::cerr << "ERROR: Unable to load bitmap: " << SDL_GetError() << std::endl;
            throw 1;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

    void Image::LoadGif(const std::string Filepath) {
#ifdef DEBUG
        std::cout << "DEBUG: Load Image: " << Filepath << std::endl;
#endif
        SDL_Surface *temp;
        SDL_RWops *rwop;

        rwop = SDL_RWFromFile(Filepath.c_str(), "rb");
        temp = IMG_LoadGIF_RW(rwop);

        if (temp == NULL) {
            std::cerr << "ERROR: Unable to load bitmap: " << SDL_GetError() << std::endl;
            throw 1;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        this->surface = SDL_DisplayFormat(temp);
        SDL_FreeSurface(temp);
    }

}
