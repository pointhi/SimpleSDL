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

    //! Make a SDL-Window and made it editable

    class Window : public SDL::DrawingArea {
    private:

        bool Fullscreen;
        long int LastDisplayUpdate;
        int FPS;
    public:
        Window(const unsigned int Width = 800, const unsigned int Height = 600);
        virtual ~Window();

        //! Update Window
        void Flip();

        //! Set Window-Name
        void SetName(const std::string Name);

    public:

        //! Set Fullscreen-Mode for Window
        void SetFullscreen(bool Fullscreen);

        //! Toggle the Fullscreen-Mode
        void ToggleFullscreen();

    public:
        //! Get Mouse Position
        uint8_t GetMouseState(int* x, int* y) const;

        //! Check Key
        int GetKeyboardButton(const int Key) const;

        //! Get Update-Rate from Window

        int GetFps() {
            return this->FPS;
        }

    private:

        Window(const Window& orig);
        void Init(const unsigned int Width, const unsigned int Height);

    };

}

#endif	/* WINDOW_HPP */

