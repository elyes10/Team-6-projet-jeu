#include<stdio.h>
#include<stdlib.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include "enigme.h"









int main(void)
{  
  
  SDL_Surface *screen = NULL; 
 
	
SDL_Init(SDL_INIT_VIDEO);
   
	screen = SDL_SetVideoMode(952,535,24,SDL_HWSURFACE | SDL_DOUBLEBUF);
    
mini_map(screen);     







SDL_Quit();
return 0;



}


