#include <SDL/SDL.h>
#include <stdio.h>
#include<SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include<SDL/SDL_image.h>
//#include "player.h"
#include "background.h"



//SDL_Surface *background;

 void initialiser_background (background *b)  
{    
                                                               
 b->background=IMG_Load("lvl1map.png");
}





void afficher_background (SDL_Surface *screen, background *b)
{
b->camera.x=0;
b->camera.y=0;

SDL_BlitSurface(b->background,NULL,screen,&b->camera);
SDL_Flip(screen);
}






/*
int afficherbackground(SDL_Surface* screen)

{
int x,y;
SDL_Surface *background=NULL;
 SDL_Rect position;
position.x=0;
position.y=0;

background=IMG_Load("lvl1map.png");
SDL_BlitSurface(background,NULL,screen,&position);
SDL_Flip(screen);
return 2;

SDL_Event event;

while (SDL_PollEvent(&event))

{

switch (event.type)

{

case SDL_QUIT:
SDL_QUIT;
return(0);
break;

}
}
}

*/





















