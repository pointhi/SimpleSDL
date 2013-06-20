/**
 * @file Color.hpp
 *
 * @author Thomas Pointhuber
 *
 * @date 5/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_COLOR_HPP
#define	SSDL_COLOR_HPP

#include <stdint.h>

namespace SSDL {

    /**
     * @brief Represent a Color Value
     */
    class Color {
    public:

        /**
         * @param Red The amount of Red
         * @param Green The amount of Green
         * @param Blue The amount of Blue
         * @param Alpha The amount of Transparent
         */
        explicit Color(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        /**
         * @brief Set a new Color
         *
         * @param Red The amount of Red
         * @param Green The amount of Green
         * @param Blue The amount of Blue
         * @param Alpha The amount of Transparent
         */
        void SetColor(const uint8_t Red = 0, const uint8_t Green = 0, const uint8_t Blue = 0, const uint8_t Alpha = 255);

        /**
         * @brief Set a new Value for Red
         *
         * @param Red The amount of Red
         */
        void SetRed(const uint8_t Value) {
            this->RedColor = Value;
        }

        /**
         * @brief Set a new Value for Green
         *
         * @param Green The amount of Green
         */
        void SetGreen(const uint8_t Value) {
            this->GreenColor = Value;
        }

        /**
         * @brief Set a new Value for Blue
         *
         * @param Blue The amount of Blue
         */
        void SetBlue(const uint8_t Value) {
            this->BlueColor = Value;
        }

        /**
         * @brief Set a new Transparent Value
         *
         * @param Alpha The amount of Transparent
         */
        void SetAlpha(const uint8_t Value) {
            this->AlphaColor = Value;
        }

        /**
         * @brief Get the amount of Red
         *
         * @return The amount of Red
         */
        uint8_t GetRed() const {
            return this->RedColor;
        }

        /**
         * @brief Get the amount of Green
         *
         * @return The amount of Green
         */
        uint8_t GetGreen() const {
            return this->GreenColor;
        }

        /**
         * @brief Get the amount of Blue
         *
         * @return The amount of Blue
         */
        uint8_t GetBlue() const {
            return this->BlueColor;
        }

        /**
         * @brief Get the amount of the Alpha-Channel
         *
         * @return The amount of the Transparent
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

        const SSDL::Color White = SSDL::Color(255, 255, 255);
        const SSDL::Color LightGrey = SSDL::Color(192, 192, 192);
        const SSDL::Color Grey = SSDL::Color(128, 128, 128);
        const SSDL::Color DarkGrey = SSDL::Color(64, 64, 64);
        const SSDL::Color Black = SSDL::Color(0, 0, 0);

        // Red

        const SSDL::Color LightRed = SSDL::Color(255, 128, 128);
        const SSDL::Color Red = SSDL::Color(255, 0, 0);
        const SSDL::Color DarkRed = SSDL::Color(64, 0, 0);

        // Green

        const SSDL::Color LightGreen = SSDL::Color(128, 255, 128);
        const SSDL::Color Green = SSDL::Color(0, 255, 0);
        const SSDL::Color DarkGreen = SSDL::Color(0, 64, 0);

        // Blue

        const SSDL::Color LightBlue = SSDL::Color(128, 128, 255);
        const SSDL::Color Blue = SSDL::Color(0, 0, 255);
        const SSDL::Color DarkBlue = SSDL::Color(0, 0, 64);

        // Other

        const SSDL::Color Yellow = SSDL::Color(255, 255, 0);
        const SSDL::Color Pink = SSDL::Color(255, 0, 255);
        const SSDL::Color Turquoise = SSDL::Color(0, 255, 255);

    }

}

#endif	/* SSDL_COLOR_HPP */

