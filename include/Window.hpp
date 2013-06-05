/*
 * File:   Window.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 17:51
 */

#ifndef WINDOW_HPP
#define	WINDOW_HPP

#include "SDL/SDL.h"
#include <tr1/memory>

#include "Surface.hpp"
#include <string>

namespace SDL {

    class Surface;

    class Window : public SDL::Surface {
    public:
        Window();
        virtual ~Window();

        void Flip(SDL::Surface *FlipSurface);

        void SetName(const std::string Name);

    private:

        Window(const Window& orig);
        void Init();

    };

}

#endif	/* WINDOW_HPP */

