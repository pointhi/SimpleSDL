/*
 * File:   Window.hpp
 * Author: thomas
 *
 * Created on 5. Juni 2013, 17:51
 */

#ifndef SSDL_WINDOW_HPP
#define	SSDL_WINDOW_HPP

#include "DrawingArea.hpp"
#include <string>

namespace SDL {

    class Surface;

    class Window : public SDL::DrawingArea {
    public:
        Window();
        virtual ~Window();

        void Flip(); // Update Window

        void SetName(const std::string Name);

    private:

        Window(const Window& orig);
        void Init();

    };

}

#endif	/* WINDOW_HPP */

