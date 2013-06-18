/**
 * \file Surface.h
 *
 * \author Thomas Pointhuber
 *
 * \date 5/6/2013
 * \copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_SURFACE_H
#define	SSDL_SURFACE_H

#include "Color.hpp"

struct SDL_Surface;

namespace SDL {

    /**
     * \brief Represent a SDL_Surface
     */

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

