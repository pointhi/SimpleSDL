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
#include <stdint.h>
namespace SDL {

    class Surface;

    class Window : public SDL::DrawingArea {
    private:

        bool Fullscreen;
    public:
        Window();
        virtual ~Window();

        void Flip(); // Update Window

        void SetName(const std::string Name);

    public:

        void SetFullscreen(bool Fullscreen);
        void ToggleFullscreen();

    public:

        uint8_t GetMouseState(int* x, int* y) const;
        int GetKeyboardButton(const int Key) const;

    private:

        Window(const Window& orig);
        void Init();

    };

}

#endif	/* WINDOW_HPP */

