/**
 * @file EventHandler.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include "SDL/SDL.h"

#include "../include/SSDL_EventHandler.hpp"

namespace SSDL {

    EventHandler::EventHandler() {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::EventHandler" << std::endl;
#endif
        this->Init();
    }

    EventHandler::EventHandler(const EventHandler& orig) {

    }

    EventHandler::~EventHandler() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: Init SSDL::EventHandler" << std::endl;
#endif
    }

    void EventHandler::CollectEvents() {
        while (SDL_PollEvent(&this->event)) {
            switch (this->event.type) {
                case SDL_QUIT:
                    if (this->CloseEventFunction)
                        this->CloseEventFunction(0);
                    break;

                case SDL_KEYDOWN:
                    if (this->KeyboardDownEventFunction) {
                        this->KeyboardDownEventFunction(this->event.key.keysym.sym);
                    }
                    break;

                case SDL_KEYUP:
                    if (this->KeyboardUpEventFunction) {
                        this->KeyboardUpEventFunction(this->event.key.keysym.sym);
                    }
                    break;

                case SDL_MOUSEBUTTONDOWN:
                    if (this->MouseEventFunction) {
                        this->MouseEventFunction(this->event.button.button);
                    }
                    break;

                default:
                    break;
            }
        }

    }

    void EventHandler::Init() {
        this->KeyboardDownEventFunction = NULL;
        this->KeyboardUpEventFunction = NULL;
        this->MouseEventFunction = NULL;
        this->SystemEventFunction = NULL;
        this->CloseEventFunction = NULL;
    }

}

