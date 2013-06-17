/*
 * File:   DrawingArea.hpp
 * Author: thomas
 *
 * Created on 6. Juni 2013, 19:53
 */

#ifndef SSDL_DRAWINGAREA_HPP
#define	SSDL_DRAWINGAREA_HPP

#include "Surface.hpp"
#include "Color.hpp"

#include <string>

namespace SDL {

    //! Represent a Surface and made it editable

    class DrawingArea : public SDL::Surface {
    public:

        DrawingArea();
        DrawingArea(const DrawingArea& orig);
        virtual ~DrawingArea();

    public:

        //! Clear the Surface

        void Clear() {
            this->Fill(SDL::ColorList::Black);
        }

        //! Copy a other Surface like an Image or a DrawingArea in this Surface
        void DrawSurface(const int x, const int y, const Surface& Surface);

        //! Draw a String
        void DrawString(const int x, const int y, const int size, const std::string Text, const SDL::Color Color);

        //! Draw a Pixel
        void DrawPixel(const int x, const int y, const SDL::Color Color);

        //! Draw a Line
        void DrawLine(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);

        //! Draw a Line with a width
        void DrawThickLine(const int x1, const int y1, const int x2, const int y2, const int width, const SDL::Color Color);

        //! Draw a Rect
        void DrawRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);

        //! Draw a Circle
        void DrawCircle(const int x, const int y, const int r, const SDL::Color Color);

        //! Draw a Ellipse
        void DrawEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color);

        //! Draw a Triangel
        void DrawTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SDL::Color Color);

        //! Fill the Surface with a color
        void Fill(const SDL::Color Color);

        //! Draw a Filled Rect
        void DrawFilledRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);

        //! Draw a Filled Circle
        void DrawFilledCircle(const int x, const int y, const int r, const SDL::Color Color);

        //! Draw a Filled Ellipse
        void DrawFilledEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color);

        //! Draw a Filled Triangle
        void DrawFilledTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SDL::Color Color);

    };
}

#endif	/* DRAWINGAREA_HPP */

