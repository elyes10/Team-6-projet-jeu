#include<stdio.h>
#include<stdlib.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include "enigme.h"
void mini_map(SDL_Surface *screen)
{
SDL_Surface *background = NULL,*miniperso = NULL,*smallback = NULL,*grand_perso = NULL;
miniperso=IMG_Load("face.png" );
smallback =IMG_Load("backgroundsmall.png");
background = IMG_Load("background.png" );
grand_perso=IMG_Load("personnage.png" );
SDL_Rect b_pos;
b_pos.x=0;
b_pos.y=0;
SDL_Rect mini_pos;
mini_pos.x=0;
mini_pos.y=40;
SDL_Rect gr_pos;
gr_pos.x=0;
gr_pos.y=350;
SDL_Rect map_pos;
map_pos.x=0;
map_pos.y=0;
int cont=1,o=0;
SDL_Event e;
while(cont)
{
mini_pos.x=(gr_pos.x/8)+3;
SDL_BlitSurface(background,NULL,screen,&b_pos);
SDL_BlitSurface(grand_perso,NULL,screen,&gr_pos);
SDL_BlitSurface(smallback,NULL,screen,&map_pos);
SDL_BlitSurface(miniperso,NULL,screen,&mini_pos);
SDL_Flip(screen);
SDL_WaitEvent(&e);
if(e.type==SDL_KEYDOWN)
{if(e.key.keysym.sym==SDLK_RIGHT)

gr_pos.x+=8;

if(e.key.keysym.sym==SDLK_LEFT)
gr_pos.x-=8;
}











}

}
