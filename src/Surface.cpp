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
        *this = orig; // FIXME: Not Tested, correct?
    }

    Surface::~Surface() {
        SDL_FreeSurface(this->surface);
    }

    Surface& Surface::operator=(const Surface& orig) {
        if (this == &orig) {
            return *this;
        }

        SDL_FreeSurface(this->surface);
        this->surface = NULL;

        SDL_BlitSurface(orig.surface, NULL, this->surface, NULL);
        return *this;
    }

    void Surface::NewSurface(const int width, const int heigth) {
        this->surface = SDL_CreateRGBSurface(SDL_SWSURFACE, width, heigth, 16, 0, 0, 0, 0);
    }

    SDL_Surface* Surface::GetSurface() {
        return this->surface;
    }

    void Surface::DrawString(const int x, const int y, const int size, const std::string Text, const SDL::Color Color) {
        //        gfxPrimitivesSetFont(&SDL_gfx_font_9x18B_fnt, 9, 18); // TODO: SDL_ttf?
        stringRGBA(this->surface, x, y, Text.c_str(), Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawLine(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color) {
        lineRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color) {
        rectangleRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawCircle(const int x, const int y, const int r, const SDL::Color Color) {
        aacircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color) {
        ellipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::Fill(const SDL::Color Color) {
        this->DrawFilledRect(0, 0, this->surface->w, this->surface->h, Color);
    }

    void Surface::DrawFilledRect(const int x1, const int y1, const int x2, const int y2, const SDL::Color Color) {
        boxRGBA(this->surface, x1, y1, x2, y2, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawFilledCircle(const int x, const int y, const int r, const SDL::Color Color) {

        filledCircleRGBA(this->surface, x, y, r, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }

    void Surface::DrawFilledEllipse(const int x, const int y, const int rx, const int ry, const SDL::Color Color) {
        filledEllipseRGBA(this->surface, x, y, rx, ry, Color.GetRed(), Color.GetGreen(), Color.GetBlue(), Color.GetAlpha());
    }
}