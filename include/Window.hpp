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

