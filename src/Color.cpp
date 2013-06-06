/*
 * File:   Color.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#include <stdint.h>

#include <SDL/SDL_stdinc.h>

#include "../include/Color.hpp"

namespace SDL {

    Color::Color(const uint8_t Red, const uint8_t Green, const uint8_t Blue, const uint8_t Alpha) {
        this->SetColor(Red, Green, Blue, Alpha);
    }

    void Color::SetColor(const uint8_t Red, const uint8_t Green, const uint8_t Blue, const uint8_t Alpha) {

        this->SetRed(Red);
        this->SetGreen(Green);
        this->SetBlue(Blue);
        this->SetAlpha(Alpha);
    }

}