/*
 * File:   Color.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#include "../include/Color.hpp"

namespace SDL {

    Color::Color(const int Red, const int Green, const int Blue, const int Alpha) {
        this->SetColor(Red, Green, Blue, Alpha);
    }

    //    Color::Color(const Color& orig) {
    //    }
    //
    //    Color::~Color() {
    //    }

    void Color::SetColor(const int Red, const int Green, const int Blue, const int Alpha) {

        this->Red = Red;
        this->Green = Green;
        this->Blue = Blue;
        this->Alpha = Alpha;
    }

}