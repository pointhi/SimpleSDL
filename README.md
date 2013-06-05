SimpleSDL
=========

a C++ Library to simplify graphic working with SDL

Licence: GNU GPLv3

Needed-Librarys
===============

* SDL
* SDL_gfx

Warning
=======

The Library was developed on Ubuntu, you must edit the Makefile to work with it on Windows

Working
=======

* Loading Window
* Drawing simple Graphic structures
* Drawing Text
* Simple Delay Function

Openpoint todo
========

* Event-Handler
* Images
* Correct working of Surface without Window
* More Fonts
* Simple GUI-System
* Screenshot

Example Programm
================

/*
 * File:   main.cpp
 * Author: thomas
 * Licence: GNU GPLv3
 *
 * Created on 5. Juni 2013, 17:02
 */

#include <SimpleSDL.hpp>

int main(int argc, char** argv) {

    SDL::Window SDL_Window;
    SDL_Window.SetName("Test Programm for SimpleSDL by Thomas Pointhuber");

    SDL_Window.Clear();

    SDL_Window.DrawFilledRect(20, 20, 80, 80, SDL::Color(255, 255, 0));

    SDL_Window.DrawFilledCircle(200, 200, 80, SDL::Color(255, 255, 255));

    SDL_Window.DrawLine(500, 100, 60, 400, SDL::Color(255, 0, 255));

    SDL_Window.DrawRect(200, 40, 80, 80, SDL::Color(255, 255, 0));

    SDL_Window.DrawFilledEllipse(500, 200, 50, 80, SDL::Color(255, 0, 0));

    SDL_Window.DrawString(500, 400, 20, "TestString", SDL::Color(255, 255, 255));

    SDL_Window.Flip(&SDL_Window);

    SDL::Time::Delay(5000);

    return 0;
}
