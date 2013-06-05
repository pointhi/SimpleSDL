/*
 * File:   Color.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#include "../include/Color.hpp"

namespace SDL {

    Color::Color(int Red, int Green, int Blue) {
        this->SetColor(Red, Green, Blue);
    }

    //    Color::Color(const Color& orig) {
    //    }
    //
    //    Color::~Color() {
    //    }

    void Color::SetColor(int Red, int Green, int Blue) {

        this->Red = Red;
        this->Green = Green;
        this->Blue = Blue;
    }

    int Color::GetRed() {
        return this->Red;
    }

    int Color::GetGreen() {
        return this->Green;
    }

    int Color::GetBlue() {
        return this->Blue;
    }

}