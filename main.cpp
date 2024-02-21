#include <SDL.h>
#include "initSDL.h"

int main(int argc, char* argv[]){
    SDL_Window *Window;
    SDL_Renderer *Renderer;
    initSDL(Window, Renderer);
    waitUntilKeyPressed();
    quitSDL(Window, Renderer);
    return 0;
}
