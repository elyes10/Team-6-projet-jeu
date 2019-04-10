
#include "main.h"







int main(void)



{
SDL_Surface *background;

SDL_Surface *screen = NULL;

struct background b;

//b-> b = NULL;
//Player Hero;
  




int continuer = 1;

SDL_Event event;

SDL_Init(SDL_INIT_VIDEO);
screen = SDL_SetVideoMode(952,535, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

Mix_Music* music;

     
 while (continuer==1)
    {
        
        continuer=showmenu(screen,music);
    }

printf("%d",continuer);
 while (continuer == 2)
    {   
	printf("11");

	//continuer=afficherbackground(screen);
 initialiser_background (&b) ;
afficher_background (screen,&b);


while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDL_QUIT :
{
continuer=0;
break;
}
}
}


while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDLK_ESCAPE :
{

continuer=0;
break;
}
}
}




    }


 
    
   

     Mix_FreeMusic(music);
    Mix_CloseAudio();
   SDL_FreeSurface(screen);
    SDL_Quit();

    return EXIT_SUCCESS;
}



		   
						

   
























