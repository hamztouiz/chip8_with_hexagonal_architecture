#include <stdio.h>
#include <SDL2/SDL.h>
#define WINDOWS_TITLE "hello world"
#define WINDOWS_WIDTH  480
#define WINDOWS_HEIGHT 640

int main(int argc, char* argv[]) {
    if(SDL_Init( SDL_INIT_EVERYTHING ) != 0) 
    {
        printf("SDL_Init failed \n");
        printf("%s", SDL_GetError());
        return 1;
    }
    SDL_Window* win = SDL_CreateWindow( WINDOWS_TITLE, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOWS_WIDTH, WINDOWS_HEIGHT, SDL_WINDOW_SHOWN );
    if(win == NULL) 
    {
        printf("SDL_CreateWindow failed \n");
        printf("%s", SDL_GetError());
        SDL_Quit();
        return 1;
    }
    
    SDL_Delay(3000);

    SDL_DestroyWindow(win);
    SDL_Quit();
    return 0;
}
