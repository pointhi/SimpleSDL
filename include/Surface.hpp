/*
 * File:   Surface.h
 * Author: thomas
 *
 * Created on 5. Juni 2013, 18:30
 */

#ifndef SSDL_SURFACE_H
#define	SSDL_SURFACE_H

#include "Color.hpp"

struct SDL_Surface;

namespace SDL {

    class Surface {
    protected:

        SDL_Surface* surface;

    public:

        Surface();
        Surface(const Surface& orig);
        virtual ~Surface();

        Surface& operator=(const Surface& orig);

    public:


        void NewSurface(const int width, const int heigth);
        SDL_Surface* GetSurface() const;

        void SetTransparentColor(const SDL::Color Color);

    };

}

#endif	/* SURFACE_H */

