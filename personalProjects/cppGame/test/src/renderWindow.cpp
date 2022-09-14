#include <SDL2\SDL.h>
#include <SDL2\SDL_image.h>
#include <iostream>

#include "renderWindow.h"
using namespace std;

renderWindow::renderWindow(const char* p_title, int p_w, int p_h)
    :window(NULL), renderer(NULL)
{
    window =SDL_CreateWindow(p_title,SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED,p_w,p_h,SDL_WINDOW_SHOWN);
    if(window == NULL)
        {
           cout << "Window failed to init Error: " <<SDL_GetError() << endl;
        }
    renderer = SDL_CreateRenderer(window, -1,SDL_RENDERER_ACCELERATED);
}

SDL_Texture* renderWindow::loadTexture(const char* p_filePath)
{
    SDL_Texture* texture = NULL;
    texture = IMG_LoadTexture(renderer,p_filePath);
    if(texture == NULL) cout<<"Failed to load texture. Error: "<<SDL_GetError()<<endl;

    return texture;
}

void renderWindow::cleanUp()
{
    SDL_DestroyWindow(window);
}
void renderWindow::clear()
{
    SDL_RenderClear(renderer);
}

void renderWindow::render(SDL_Texture* p_tex)
{
    SDL_RenderCopy(renderer,p_tex,NULL,NULL);
}

void renderWindow::display()
{
    SDL_RenderPresent(renderer);
}
