#include <SDL.h>
#include "initSDL.h"

int main(int argc, char* argv[]){
    SDL_Window *w;
    SDL_Renderer *r;
    initSDL(w, r);
    waitUntilKeyPressed();
    quitSDL(w, r);
    return 0;
}
