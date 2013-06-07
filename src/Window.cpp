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
#include <stdint.h>

#include "SDL/SDL.h"

namespace SDL {

    Window::Window(const unsigned int Width, const unsigned int Height) {
        this->Init(Width, Height);
    }

    Window::~Window() {
    }

    void Window::Init(const unsigned int Width, const unsigned int Height) {
        SDL::General::Init();

        this->Surface::surface = SDL_SetVideoMode(Width, Height, 16, SDL_HWSURFACE | SDL_DOUBLEBUF);
        this->Fullscreen = false;

        if (this->Surface::surface == NULL) {
            //            fprintf(stderr, "Unable to set video mode: %s\n", SDL_GetError());
            throw 1;
        }
    }

    void Window::Flip() {
        SDL_Flip(this->surface);
    }

    void Window::SetFullscreen(bool Fullscreen) {
        if (Fullscreen != this->Fullscreen) {
            SDL_WM_ToggleFullScreen(this->Surface::surface);
            this->Fullscreen = Fullscreen;
        }
    }

    void Window::ToggleFullscreen() {
        SDL_WM_ToggleFullScreen(this->Surface::surface);
        this->Fullscreen = !this->Fullscreen;
    }

    void Window::SetName(const std::string Name) {
        SDL_WM_SetCaption(Name.c_str(), NULL);
    }

    uint8_t Window::GetMouseState(int* x, int* y) const {
        return SDL_GetMouseState(x, y);
    }

    int Window::GetKeyboardButton(const int Key) const {
        uint8_t *allButtons = SDL_GetKeyState(NULL);

        return allButtons[Key];
    }

}

