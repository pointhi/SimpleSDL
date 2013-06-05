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
        Color(int Red = 0, int Green = 0, int Blue = 0);
        //        Color(const Color& orig);
        //        virtual ~Color();

        void SetColor(int Red = 0, int Green = 0, int Blue = 0);

        int GetRed();
        int GetGreen();
        int GetBlue();

    private:

        int Red;
        int Green;
        int Blue;

    };

}

#endif	/* COLOR_HPP */

