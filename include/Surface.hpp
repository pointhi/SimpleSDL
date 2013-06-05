/*
 * File:   Surface.h
 * Author: thomas
 *
 * Created on 5. Juni 2013, 18:30
 */

#ifndef SURFACE_H
#define	SURFACE_H

#include "SDL/SDL.h"

#include <tr1/memory>
#include "Color.hpp"
#include <string>

namespace SDL {

    class Surface {
    protected:

        SDL_Surface* surface;

        Surface();
        Surface(const Surface& orig);
        virtual ~Surface();

    public:
        SDL_Surface* GetSurface();

        void Clear() {
            this->Fill(SDL::Color());
        }

        void DrawString(int x, int y, int size, std::string Text, SDL::Color Color);

        void DrawLine(int x1, int y1, int x2, int y2, SDL::Color Color);
        void DrawRect(int x, int y, int w, int h, SDL::Color Color);
        void DrawCircle(int x, int y, int r, SDL::Color Color);
        void DrawEllipse(int x, int y, int rx, int ry, SDL::Color Color);

        void Fill(SDL::Color Color);
        void DrawFilledRect(int x, int y, int w, int h, SDL::Color Color);
        void DrawFilledCircle(int x, int y, int r, SDL::Color Color);
        void DrawFilledEllipse(int x, int y, int rx, int ry, SDL::Color Color);

    private:

    };

}

#endif	/* SURFACE_H */

