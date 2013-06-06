/*
 * File:   Window.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 17:51
 */

#include "../include/Window.hpp"
#include "../include/General.hpp"
#include "../include/Surface.hpp"
#include <iostream>
#include <string>

#include "SDL/SDL.h"

namespace SDL {

    Window::Window() {
        this->Init();
    }

    Window::~Window() {
    }

    void Window::Init() {
        SDL::General::Init();

        this->Surface::surface = SDL_SetVideoMode(800, 600, 16, SDL_HWSURFACE | SDL_DOUBLEBUF);

        if (this->Surface::surface == NULL) {
            //            fprintf(stderr, "Unable to set video mode: %s\n", SDL_GetError());
            throw 1;
        }
    }

    void Window::Flip() {
        SDL_Flip(this->surface);
    }

    void Window::SetName(const std::string Name) {
        SDL_WM_SetCaption(Name.c_str(), NULL);
    }

}

