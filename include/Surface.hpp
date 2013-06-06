/*
 * File:   Surface.h
 * Author: thomas
 *
 * Created on 5. Juni 2013, 18:30
 */

#ifndef SSDL_SURFACE_H
#define	SSDL_SURFACE_H

#include "Color.hpp"

#include <string>

struct SDL_Surface;

namespace SDL {

    class Surface {
    public:

        SDL_Surface* surface;

        Surface();
        Surface(const Surface& orig);
        virtual ~Surface();

    public:
        SDL_Surface* GetSurface();

        void Clear() {
            this->Fill(SDL::ColorList::Black);
        }

        void DrawString(const int x, const int y, const int size, const std::string Text, const SDL::Color Color);

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

#endif	/* SURFACE_H */

