/**
 * @file EventHandler.hpp
 *
 * @author Thomas Pointhuber
 *
 * @date 6/6/2013
 * @copyright GNU General Public License (GPL) 3.0
 */

#ifndef SSDL_EVENTHANDLER_HPP
#define	SSDL_EVENTHANDLER_HPP

#include "SDL/SDL.h"
#include <set>
#include <string>

namespace SSDL {

    /**
     * @brief Working with the SDL_Event-Handler
     */

    class EventHandler {
    private:

        SDL_Event event;

        void (*KeyboardDownEventFunction)(int);
        void (*KeyboardUpEventFunction)(int);
        void (*MouseEventFunction)(int);
        void (*SystemEventFunction)(int);
        void (*CloseEventFunction)(int);

    public:
        EventHandler();
        virtual ~EventHandler();

    public:

        //! Check Events
        void CollectEvents();

        //! Set the Function who will be called when an Keyboard-Down Event occurred

        void SetKeyboardDownEventFunction(void (*KeyboardDownEventFunction)(int)) {
            this->KeyboardDownEventFunction = KeyboardDownEventFunction;
        }

        //! Set the Function who will be called when an Keyboard-Up Event occurred

        void SetKeyboardUpEventFunction(void (*KeyboardUpEventFunction)(int)) {
            this->KeyboardUpEventFunction = KeyboardUpEventFunction;
        }

        //! Set the Function who will be called when an Mouse Event occurred

        void SetMouseEventFunction(void (*MouseEventFunction)(int)) {
            this->MouseEventFunction = MouseEventFunction;
        }; // Clicks

        //! Set the Function who will be called when an System Event occurred

        void SetSystemEventFunction(void (*SystemEventFunction)(int)) {

            this->SystemEventFunction = SystemEventFunction;
        } // Quite, Rezise,...

        //! Set the Function who will be called when an Close Event occurred

        void SetCloseEventFunction(void (*CloseEventFunction)(int)) {
            this->CloseEventFunction = CloseEventFunction;
        } // Quite, Rezise,...

    private:

        void Init();
        EventHandler(const EventHandler & orig);
    };

    //! Represent the Keys of a Keyboard

    namespace Keyboard {
        //! The Alphapet Keys
        namespace Char {
            const int A = SDLK_a;
            const int B = SDLK_b;
            const int C = SDLK_c;
            const int D = SDLK_d;
            const int E = SDLK_e;
            const int F = SDLK_f;
            const int G = SDLK_g;
            const int H = SDLK_h;
            const int I = SDLK_i;
            const int J = SDLK_j;
            const int K = SDLK_k;
            const int L = SDLK_l;
            const int M = SDLK_m;
            const int N = SDLK_n;
            const int O = SDLK_o;
            const int P = SDLK_p;
            const int Q = SDLK_q;
            const int R = SDLK_r;
            const int S = SDLK_s;
            const int T = SDLK_t;
            const int U = SDLK_u;
            const int V = SDLK_v;
            const int W = SDLK_w;
            const int X = SDLK_x;
            const int Y = SDLK_y;
            const int Z = SDLK_z;
        }

        //! Numeric-Keys on top

        namespace Num {
            const int _0 = SDLK_0;
            const int _1 = SDLK_1;
            const int _2 = SDLK_2;
            const int _3 = SDLK_3;
            const int _4 = SDLK_4;
            const int _5 = SDLK_5;
            const int _6 = SDLK_6;
            const int _7 = SDLK_7;
            const int _8 = SDLK_8;
            const int _9 = SDLK_9;
        }

        //! F-Keys

        namespace Func {
            const int F1 = SDLK_F1;
            const int F2 = SDLK_F2;
            const int F3 = SDLK_F3;
            const int F4 = SDLK_F4;
            const int F5 = SDLK_F5;
            const int F6 = SDLK_F6;
            const int F7 = SDLK_F7;
            const int F8 = SDLK_F8;
            const int F9 = SDLK_F9;
            const int F10 = SDLK_F10;
            const int F11 = SDLK_F11;
            const int F12 = SDLK_F12;
        }

        //! Arrows

        namespace Arrow {
            const int UP = SDLK_UP;
            const int DOWN = SDLK_DOWN;
            const int RIGHT = SDLK_RIGHT;
            const int LEFT = SDLK_LEFT;
        }

        //! Special like space, esc,...

        namespace Special {
            const int ESC = SDLK_ESCAPE;
            const int TAB = SDLK_TAB;
            const int RETURN = SDLK_RETURN;
            const int PRINT = SDLK_PRINT;
            const int BACKSPACE = SDLK_BACKSPACE;
            const int CAPSLOCK = SDLK_CAPSLOCK;
            const int DELETE = SDLK_DELETE;
            const int LSHIFT = SDLK_LSHIFT;
            const int RSHIFT = SDLK_RSHIFT;
            const int SPACE = SDLK_SPACE;
        }

        //! Buttons on the Keypad

        namespace Keypad {
            const int _0 = SDLK_KP0;
            const int _1 = SDLK_KP1;
            const int _2 = SDLK_KP2;
            const int _3 = SDLK_KP3;
            const int _4 = SDLK_KP4;
            const int _5 = SDLK_KP5;
            const int _6 = SDLK_KP6;
            const int _7 = SDLK_KP7;
            const int _8 = SDLK_KP8;
            const int _9 = SDLK_KP9;

            const int UP = SDLK_KP8;
            const int DOWN = SDLK_KP2;
            const int RIGHT = SDLK_KP6;
            const int LEFT = SDLK_KP4;

            const int ENTER = SDLK_KP_ENTER;
            const int EQUALS = SDLK_KP_EQUALS;
            const int PLUS = SDLK_KP_PLUS;
            const int MINUS = SDLK_KP_MINUS;
            const int MULTIPLY = SDLK_KP_MULTIPLY;
        }
    }
}

#endif	/* SSDL_EVENTHANDLER_HPP */

