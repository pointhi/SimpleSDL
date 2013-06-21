/**
 * @file DrawingArea.cpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#include "iostream"

#include "SDL/SDL.h"
#include "SDL/SDL_gfxPrimitives.h"

#include "../include/SSDL_DrawingArea.hpp"
#include "../include/SSDL_Color.hpp"
#include "../include/SSDL_Surface.hpp"
#include "../include/SSDL_Image.hpp"

namespace SSDL {

    DrawingArea::DrawingArea() {
#ifdef DEBUG
        std::cout << "DEBUG: Constructor: SSDL::DrawingArea" << std::endl;
#endif
    }

    DrawingArea::DrawingArea(const DrawingArea& orig) {
    }

    DrawingArea::~DrawingArea() {
#ifdef DEBUG
        std::cout << "DEBUG: Destructor: SSDL::DrawingArea" << std::endl;
#endif
    }

    void DrawingArea::Clear() {
        this->Fill(SSDL::ColorList::Black);
    }

    void DrawingArea::DrawSurface(const int x, const int y, const Surface& Surface) {
        SDL_Rect src, dest;

        src.x = 0;
        src.y = 0;
        src.w = Surface.GetSurface()->w;
        src.h = Surface.GetSurface()->h;

        dest.x = x;
        dest.y = y;
        dest.w = Surface.GetSurface()->w;
        dest.h = Surface.GetSurface()->h;

        SDL_BlitSurface(Surface.GetSurface(), &src, this->surface, &dest);
    }

    void DrawingArea::DrawString(const int x, const int y, const int size, const std::string Text, const SSDL::Color Color) {
        //        gfxPrimitivesSetFont(&SDL_gfx_font_9x18B_fnt, 9, 18); // TODO: SDL_ttf?
        stringRGBA(this->surface, x, y, Text.c_str(), Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawPixel(const int x, const int y, const SSDL::Color Color) {
        pixelRGBA(this->surface, x, y, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawLine(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color) {
        lineRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawThickLine(const int x1, const int y1, const int x2, const int y2, const int width, const SSDL::Color Color) {
        if (x1 <= x2) {
            thickLineRGBA(this->surface, x1, y1, x2, y2, width, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
        } else {
            thickLineRGBA(this->surface, x2, y2, x1, y1, width, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
        }

    }

    void DrawingArea::DrawRect(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color) {
        rectangleRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawCircle(const int x, const int y, const int r, const SSDL::Color Color) {
        aacircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawEllipse(const int x, const int y, const int rx, const int ry, const SSDL::Color Color) {
        ellipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SSDL::Color Color) {
        trigonRGBA(this->surface, x1, y1, x2, y2, x3, y3, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::Fill(const SSDL::Color Color) {
        this->DrawFilledRect(0, 0, this->surface->w, this->surface->h, Color);
    }

    void DrawingArea::DrawFilledRect(const int x1, const int y1, const int x2, const int y2, const SSDL::Color Color) {
        boxRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawFilledCircle(const int x, const int y, const int r, const SSDL::Color Color) {

        filledCircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawFilledEllipse(const int x, const int y, const int rx, const int ry, const SSDL::Color Color) {
        filledEllipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void DrawingArea::DrawFilledTriangle(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const SSDL::Color Color) {
        filledTrigonRGBA(this->surface, x1, y1, x2, y2, x3, y3, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }
}
