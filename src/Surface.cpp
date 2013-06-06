/*
 * File:   Surface.cpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 18:30
 */

#include "../include/Surface.hpp"
#include "../include/Color.hpp"

#include "SDL/SDL.h"
#include "SDL/SDL_gfxPrimitives.h"


namespace SDL {

    Surface::Surface() {
        this->surface = NULL;
    }

    Surface::Surface(const Surface& orig) {

    }

    Surface::~Surface() {
        // XXX: Gabage collecting?
    }

    SDL_Surface* Surface::GetSurface() {
        return this->surface;
    }

    void Surface::DrawString(int x, int y, int size, std::string Text, SDL::Color Color) {
        //        gfxPrimitivesSetFont(&SDL_gfx_font_9x18B_fnt, 9, 18); // TODO: SDL_ttf?
        stringRGBA(this->surface, x, y, Text.c_str(), Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::DrawLine(int x1, int y1, int x2, int y2, SDL::Color Color) {
        lineRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::DrawRect(int x, int y, int w, int h, SDL::Color Color) {
        rectangleRGBA(this->surface, x, y, x + w, y + h, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::DrawCircle(int x, int y, int r, SDL::Color Color) {
        aacircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::DrawEllipse(int x, int y, int rx, int ry, SDL::Color Color) {
        ellipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::Fill(SDL::Color Color) {

        SDL_FillRect(this->surface, NULL, SDL_MapRGB(this->surface->format, Color.GetRed(), Color.GetGreen(), Color.GetBlue()));
    }

    void Surface::DrawFilledRect(int x, int y, int w, int h, SDL::Color Color) {

        SDL_Rect Rect;
        Rect.x = x;
        Rect.y = y;
        Rect.w = w;
        Rect.h = h;

        SDL_FillRect(this->surface, &Rect, SDL_MapRGB(this->surface->format, Color.GetRed(), Color.GetGreen(), Color.GetBlue()));
    }

    void Surface::DrawFilledCircle(int x, int y, int r, SDL::Color Color) {

        filledCircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }

    void Surface::DrawFilledEllipse(int x, int y, int rx, int ry, SDL::Color Color) {
        filledEllipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), 255);
    }
}