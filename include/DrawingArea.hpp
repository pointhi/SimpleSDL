/*
 * File:   DrawingArea.hpp
 * Author: thomas
 *
 * Created on 6. Juni 2013, 19:53
 */

#ifndef SSDL_DRAWINGAREA_HPP
#define	SSDL_DRAWINGAREA_HPP

#include "Surface.hpp"
//#include "Image.hpp"
#include "Color.hpp"

#include <string>

namespace SDL {

    class Image;

    class DrawingArea : public SDL::Surface {
    public:

        DrawingArea();
        DrawingArea(const DrawingArea& orig);
        virtual ~DrawingArea();

    public:

        void NewSurface(const int width, const int heigth);

        void Clear() {
            this->Fill(SDL::ColorList::Black);
        }

        void DrawString(const int x, const int y, const int size, const std::string Text, const SDL::Color Color);

        void DrawImage(const int x, const int y, const SDL::Image& ImageData);

        void DrawLine(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);
        void DrawRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);
        void DrawCircle(const int x, const int y, const int r, const SDL::Color Color);
        void DrawEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color);

        void Fill(const SDL::Color Color);
        void DrawFilledRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color);
        void DrawFilledCircle(const int x, const int y, const int r, const SDL::Color Color);
        void DrawFilledEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color);

    };
}

#endif	/* DRAWINGAREA_HPP */

