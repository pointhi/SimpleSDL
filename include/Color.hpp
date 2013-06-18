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

    //! Represent a Color Value

    class Color {
    public:

        /**
         * \param Red The amount of Red
         * \param Green The amount of Green
         * \param Blue The amount of Blue
         * \param Alpha The amount of Transparent
         */
        explicit Color(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        /**
         * \brief Set a new Color
         *
         * \param Red The amount of Red
         * \param Green The amount of Green
         * \param Blue The amount of Blue
         * \param Alpha The amount of Transparent
         */
        void SetColor(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        /**
         * \brief Set a new Value for Red
         *
         * \param Red The amount of Red
         */
        void SetRed(const uint8_t Value) {
            this->RedColor = Value;
        }

        /**
         * \brief Set a new Value for Green
         *
         * \param Green The amount of Green
         */
        void SetGreen(const uint8_t Value) {
            this->GreenColor = Value;
        }

        /**
         * \brief Set a new Value for Blue
         *
         * \param Blue The amount of Blue
         */
        void SetBlue(const uint8_t Value) {
            this->BlueColor = Value;
        }

        /**
         * \brief Set a new Transparent Value
         *
         * \param Alpha The amount of Transparent
         */
        void SetAlpha(const uint8_t Value) {
            this->AlphaColor = Value;
        }

        /**
         * \brief Get the amount of Red
         *
         * \return The amount of Red
         */
        uint8_t GetRed() const {
            return this->RedColor;
        }

        /**
         * \brief Get the amount of Green
         *
         * \return The amount of Green
         */
        uint8_t GetGreen() const {
            return this->GreenColor;
        }

        /**
         * \brief Get the amount of Blue
         *
         * \return The amount of Blue
         */
        uint8_t GetBlue() const {
            return this->BlueColor;
        }

        /**
         * \brief Get the amount of the Alpha-Channel
         *
         * \return The amount of the Transparent
         */
        uint8_t GetAlpha() const {
            return this->AlphaColor;
        }

    private:

        uint8_t RedColor;
        uint8_t GreenColor;
        uint8_t BlueColor;
        uint8_t AlphaColor;

    };

    //! Represent simple Color-Values

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

