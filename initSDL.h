#ifndef INITSDL_H
#define INITSDL_H

#include <SDL.h>
#include "initSDL.h"

void initSDL(SDL_Window* &Window, SDL_Renderer* &Renderer);
void waitUntilKeyPressed();
void quitSDL(SDL_Window* &Window, SDL_Renderer* &Renderer);

#endif // INITSDL_H
