/**
 * @file Color.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include <stdint.h>

#include <SDL/SDL_stdinc.h>

#include "../include/Color.hpp"

namespace SSDL {

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