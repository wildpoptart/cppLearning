#include <exception>
#include <string>
#include <iostream>
#include <SDL2\SDL.h>

#include "renderWindow.h"

using namespace std;

int main(int argc, char* args[])
{
    renderWindow window("GAME v1.0", 1280,720);

    SDL_Texture* grassTexture = window.loadTexture("gfx/play.png");

    bool gameRunning=true;
    SDL_Event event;

    while(gameRunning)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                gameRunning = false;
        }
        window.clear();
        window.render(grassTexture);
        window.display();
    }

    window.cleanUp();
    SDL_Quit()
    ;
    return 0;
}
