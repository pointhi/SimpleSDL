/**
 * \file Window.hpp
 *
 * \author Thomas Pointhuber
 *
 * \date 5/6/2013
 * \copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_WINDOW_HPP
#define	SSDL_WINDOW_HPP

#include "DrawingArea.hpp"
#include <string>
#include <stdint.h>
namespace SDL {

    class Surface;

    /**
     * \brief Make a SDL-Window and made it editable
     *
     * \warning Please only generate one! SDL::Window object
     * \bug Surface is getting free by SDL::Surface, I'm not sure but according documentation is that false and can produce a memory-leak
     */

    class Window : public SDL::DrawingArea {
    private:

        bool Fullscreen;
        long int LastDisplayUpdate;
        int FPS;
    public:
        Window(const unsigned int Width = 800, const unsigned int Height = 600);
        virtual ~Window();

        /**
         * \brief Update Window
         */
        void Flip();

        /**
         * \brief Set the Name of the Window
         *
         * \param Name The new Name for the Window
         */
        void SetName(const std::string Name);

    public:

        /**
         * \brief Set Fullscreen-Mode for Window
         *
         * \param Fullscreen true = Fullscreen, false = Normal screen
         */
        void SetFullscreen(bool Fullscreen);

        /**
         * \brief Toggle the Fullscreen-Mode
         */
        void ToggleFullscreen();

    public:

        /**
         * \brief Get Mouse Position
         *
         * \param x Pointer to a Variable which represent the x-coordinate
         * \param y Pointer to a Variable which represent the y-coordinate
         *
         * \return The pressed Buttons as 8-bit integer (not special implementation yet)
         */
        uint8_t GetMouseState(int* x, int* y) const;

        /**
         * \brief Check Key
         *
         * \param Key The Character which would be tested
         *
         * \return The state of the Button (0... not pressed, 1... pressed)
         */
        int GetKeyboardButton(const int Key) const;

        /**
         * \brief Get Update-Rate from Window
         *
         * \return The amount of refreshes per second
         */
        int GetFps() {
            return this->FPS;
        }

    private:

        Window(const Window& orig);
        void Init(const unsigned int Width, const unsigned int Height);

    };

}

#endif	/* WINDOW_HPP */

