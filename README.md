SimpleSDL  {#mainpage}
=========

a C++ Library to simplify graphic working with SDL and adding important functions to generate fast simple Graphic Programms and Games

**Licence:** GNU GPLv3

**work status:** pre Alpha, still in Developing

##Needed-Librarys

* SDL
* SDL_gfx

####Installation on Debian/Ubuntu

```
sudo apt-get install libsdl1.2-dev
sudo apt-get install libsdl-gfx1.2-dev
```

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
- [x] Event-Handler
- [x] Images
- [ ] More Fonts
- [ ] Simple GUI-System
- [ ] Screenshot
- [ ] Debug-Window

##Example Programm

This Programm draw different graphic structures on a window, and close when you press ESC or klick on the Close Button

```C++
/*
 * File:   main.cpp
 * Author: thomas
 * Licence: GNU GPLv3
 *
 * Created on 5. Juni 2013, 17:02
 */

#include <SimpleSDL.hpp>

signed int Loop = 1;

void CloseEvent(int Event) {
    Loop = 0;
}

void KeyboardEvents(int Key) {
    switch (Key) {
        case SDL::Keyboard::Special::ESC:
            Loop = 0;
            break;
        default:
            break;
    }

}

int main(int argc, char** argv) {

    SDL::Window SDL_Window; // Open Window
    SDL_Window.SetName("Test Programm for SimpleSDL by Thomas Pointhuber");

    SDL::EventHandler Events;

    Events.SetCloseEventFunction(CloseEvent);   // Define Event-Function when press Close-Button
    Events.SetKeyboardDownEventFunction(KeyboardEvents);    // Define Event-Function for Keyboard pressing

    while (Loop) {

        Events.CollectEvents(); // Call Event-Handler

        SDL_Window.Clear();     // Clear Window-Surface

        SDL_Window.DrawFilledRect(20, 20, 80, 80, SDL::Color(255, 255, 0));

        SDL_Window.DrawFilledCircle(200, 200, 80, SDL::ColorList::White);

        SDL_Window.DrawLine(500, 100, 60, 400, SDL::Color(255, 0, 255));

        SDL_Window.DrawRect(200, 40, 80, 80, SDL::Color(255, 255, 0));

        SDL_Window.DrawFilledEllipse(500, 200, 50, 80, SDL::Color(255, 0, 0));

        SDL_Window.DrawString(500, 400, 20, "Hello SimpleSDL", SDL::Color(255, 255, 255));

        SDL_Window.Flip();   // Draw Window

    }

    return 0;
}
```
