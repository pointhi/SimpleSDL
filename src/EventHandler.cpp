/*
 * File:   EventHandler.cpp
 * Author: thomas
 *
 * Created on 6. Juni 2013, 22:13
 */

#include "../include/EventHandler.hpp"

#include "SDL/SDL.h"

namespace SDL {

    EventHandler::EventHandler() {
        this->Init();
    }

    EventHandler::EventHandler(const EventHandler& orig) {

    }

    EventHandler::~EventHandler() {
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

