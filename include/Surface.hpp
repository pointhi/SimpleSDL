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

    //! Manage a SDL_Surface

    class Surface {
    protected:

        SDL_Surface* surface;

    public:

        Surface();
        Surface(const Surface& orig);
        virtual ~Surface();

        Surface& operator=(const Surface& orig);

    public:

        /**
         * \brief Create a new Surface
         *
         * \param width Width of the new Surface
         * \param heigth Height of the new Surface
         */
        void NewSurface(const int width, const int heigth);

        /**
         * \brief Get the Pointer of a SDL_Surface
         *
         * \return Get the SDL_Surface from this Class
         */
        SDL_Surface* GetSurface() const;

        /**
         * \brief Set the Color who would be transparent
         *
         * \param Color Color who would be not drawed
         */
        void SetTransparentColor(const SDL::Color Color);

    };

}

#endif	/* SURFACE_H */

