/*
 * File:   Color.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 19:56
 */

#ifndef COLOR_HPP
#define	COLOR_HPP

namespace SDL {

    class Color {
    public:
        explicit Color(int Red = 0, int Green = 0, int Blue = 0, int Alpha = 255);
        //        Color(const Color& orig);
        //        virtual ~Color();

        void SetColor(const int Red = 0, const int Green = 0, const int Blue = 0, const int Alpha = 255);

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

