/*
 * File:   Color.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#ifndef SSDL_COLOR_HPP
#define	SSDL_COLOR_HPP

namespace SDL {

    class Color {
    public:
        explicit Color(const int Red = 0, const int Green = 0, const int Blue = 0, const int Alpha = 255);
        //        Color(const Color& orig);
        //        virtual ~Color();

        void SetColor(const int Red = 0, const int Green = 0, const int Blue = 0, const int Alpha = 255);

        // XXX: SetFunctions with Value correcting or uint8

        int GetRed() {
            return this->Red;
        }

        int GetGreen() {
            return this->Green;
        }

        int GetBlue() {
            return this->Blue;
        }

        int GetAlpha() {
            return this->Alpha;
        }

    private:

        int Red;
        int Green;
        int Blue;
        int Alpha;

    };

}

#endif	/* COLOR_HPP */

