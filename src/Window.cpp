/**
 * @file Window.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */


#include <iostream>
#include <string>

#include <stdint.h>

#include "SDL/SDL.h"

#include "../include/SSDL_Window.hpp"
#include "../include/SSDL_General.hpp"
#include "../include/SSDL_Surface.hpp"
#include "../include/SSDL_Time.hpp"

namespace SSDL {

    Window::Window(const unsigned int Width, const unsigned int Height) {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::Window" << std::endl;
#endif
        this->Init(Width, Height);
    }

    Window::~Window() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: SSLD::Window" << std::endl;
#endif
    }

    void Window::Init(const unsigned int Width, const unsigned int Height) {
        SSDL::General::Init();

#ifdef DEBUG
        std::cout << "DEBUG: Init Window" << std::endl;
#endif

        this->Surface::surface = SDL_SetVideoMode(Width, Height, 16, SDL_HWSURFACE | SDL_DOUBLEBUF | SDL_HWPALETTE);
        this->Fullscreen = false;
        this->LastDisplayUpdate = SSDL::Time::GetTicks();
        this->FPS = 0;
        if (this->Surface::surface == NULL) {
            std::cerr << "ERROR: Unable to set video mode: " << SDL_GetError() << std::endl;
            throw 1;
        }
    }

    void Window::Flip() {
        SDL_Flip(this->surface);

        this->FPS = 1000 / (SSDL::Time::GetTicks() - this->LastDisplayUpdate);
        this->LastDisplayUpdate = SSDL::Time::GetTicks();
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

