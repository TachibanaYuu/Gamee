#ifndef INITSDL_CPP
#define INITSDL_CPP

#include <SDL.h>
#include <iostream>

void initSDL(SDL_Window* &Window, SDL_Renderer* &Renderer){
    if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        Window = SDL_CreateWindow("Non-completed Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);
        Renderer = SDL_CreateRenderer(Window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
        SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "lineear");
        SDL_RenderSetLogicalSize(Renderer, 800, 600);
    } else {
        std::cout << "Error!";
    }
}
void waitUntilKeyPressed() {
    SDL_Event e;
    while(true){
        if (SDL_WaitEvent(&e) != 0 && (e.type == SDL_KEYDOWN || e.type == SDL_QUIT)) return;
        SDL_Delay(100);
    }
}
void quitSDL(SDL_Window* &Window, SDL_Renderer* &Renderer){
    SDL_DestroyWindow(Window);
    SDL_DestroyRenderer(Renderer);
    SDL_Quit();
}


#endif // INITSDL_CPP
