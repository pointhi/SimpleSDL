SimpleSDL
=========

a C++ Library to simplify graphic working with SDL and adding important functions to generate fast simple Graphic Programms and Games

**Licence:** GNU GPLv3

**work status:** pre Alpha, still in Developing

##Needed-Librarys

* SDL
* SDL_gfx

##Important

####Working on Windows with SimpleSDL

The Library was developed on Ubuntu, you must edit the Makefile to work with it on Windows

####more Window

The Library only support one Window!, when you generate more than one you can become problems.

##Features

- [x] Loading Window
- [x] Drawing simple Graphic structures
- [x] Drawing Text
- [x] Simple Delay Function
- [ ] Event-Handler
- [ ] Images
- [ ] More Fonts
- [ ] Simple GUI-System
- [ ] Screenshot
- [ ] Debug-Window

##Bugs

- Surface alone wouldn't worke

##Example Programm

This Programm draw different graphic structures on a window for 5 seconds

```C++
/*
 * File:   main.cpp
 * Author: thomas
 * Licence: GNU GPLv3
 *
 * Created on 5. Juni 2013, 17:02
 */

#include <SimpleSDL.hpp>

int main(int argc, char** argv) {

    SDL::Window SDL_Window; // Open Window
    SDL_Window.SetName("Test Programm for SimpleSDL by Thomas Pointhuber");

    SDL_Window.Clear();     // Clear Window-Surface

    SDL_Window.DrawFilledRect(20, 20, 80, 80, SDL::Color(255, 255, 0));

    SDL_Window.DrawFilledCircle(200, 200, 80, SDL::Color(255, 255, 255));

    SDL_Window.DrawLine(500, 100, 60, 400, SDL::Color(255, 0, 255));

    SDL_Window.DrawRect(200, 40, 80, 80, SDL::Color(255, 255, 0));

    SDL_Window.DrawFilledEllipse(500, 200, 50, 80, SDL::Color(255, 0, 0));

    SDL_Window.DrawString(500, 400, 20, "Hello SimpleSDL", SDL::Color(255, 255, 255));

    SDL_Window.Flip(&SDL_Window);   // Draw Window

    SDL::Time::Delay(5000); // Waiting

    return 0;
}
```
