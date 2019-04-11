#include "scrolling.h"
#include "background.h"
void scroll(SDL_Event e,SDL_Rect *b)
{
    if(e.key.keysym.sym==SDLK_RIGHT)
    {
       b->x+=10;
    }
    else if(e.key.keysym.sym==SDLK_LEFT)
    {
        b->x-=10;
    }
}
