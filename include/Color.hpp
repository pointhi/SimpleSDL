/*
 * File:   Color.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#ifndef SSDL_COLOR_HPP
#define	SSDL_COLOR_HPP

#include <stdint.h>

namespace SDL {

    class Color {
    public:

        explicit Color(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        void SetColor(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        void SetRed(const uint8_t Value) {
            this->RedColor = Value;
        }

        void SetGreen(const uint8_t Value) {
            this->GreenColor = Value;
        }

        void SetBlue(const uint8_t Value) {
            this->BlueColor = Value;
        }

        void SetAlpha(const uint8_t Value) {
            this->AlphaColor = Value;
        }

        uint8_t GetRed() {
            return this->RedColor;
        }

        uint8_t GetGreen() {
            return this->GreenColor;
        }

        uint8_t GetBlue() {
            return this->BlueColor;
        }

        uint8_t GetAlpha() {
            return this->AlphaColor;
        }

    private:

        uint8_t RedColor;
        uint8_t GreenColor;
        uint8_t BlueColor;
        uint8_t AlphaColor;

    public:

    };

    namespace ColorList {

        // White -> Black

        const SDL::Color White = SDL::Color(255, 255, 255);
        const SDL::Color LightGrey = SDL::Color(192, 192, 192);
        const SDL::Color Grey = SDL::Color(128, 128, 128);
        const SDL::Color DarkGrey = SDL::Color(64, 64, 64);
        const SDL::Color Black = SDL::Color(0, 0, 0);

        // Red

        const SDL::Color LightRed = SDL::Color(255, 128, 128);
        const SDL::Color Red = SDL::Color(255, 0, 0);
        const SDL::Color DarkRed = SDL::Color(64, 0, 0);

        // Green

        const SDL::Color LightGreen = SDL::Color(128, 255, 128);
        const SDL::Color Green = SDL::Color(0, 255, 0);
        const SDL::Color DarkGreen = SDL::Color(0, 64, 0);

        // Blue

        const SDL::Color LightBlue = SDL::Color(128, 128, 255);
        const SDL::Color Blue = SDL::Color(0, 0, 255);
        const SDL::Color DarkBlue = SDL::Color(0, 0, 64);

        // Other

        const SDL::Color Yellow = SDL::Color(255, 255, 0);
        const SDL::Color Pink = SDL::Color(255, 0, 255);
        const SDL::Color Turquoise = SDL::Color(0, 255, 255);

    }

}

#endif	/* COLOR_HPP */

