#include "player.h"
#include "collision.h"


int main()
{
SDL_Surface *screen=NULL,*background = NULL, *calque= NULL;
int direction;
   Player Hero;
 SDL_Event event;
    int continuer = 1;
int collision=-1;
int x=2;
calque=IMG_Load("calque.bmp");
   SDL_Init(SDL_INIT_VIDEO);
   screen = SDL_SetVideoMode(955,553, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
Hero=InitPlayer(Hero);
Afficherbackground(Hero,screen);
while(continuer=1)
{
 SDL_PollEvent(&event);
        if(event.type==SDL_QUIT)
          continuer=0;
        else if(event.type==SDL_KEYDOWN)
        { 
            if(event.key.keysym.sym==SDLK_RIGHT) direction=0;
            if(event.key.keysym.sym==SDLK_LEFT)  direction=1;
            if(event.key.keysym.sym==SDLK_UP)    {direction=2;}
            if(event.key.keysym.sym==SDLK_DOWN)  {direction=3;}
Hero= MovePlayer(Hero,direction);
Hero= AnimatePlayer(Hero,direction);
SDL_Delay(40);
Afficherbackground(Hero,screen);
      collision=collision_Parfaite(calque,Hero.imageActuel,Hero.position,direction);
printf("%d",collision);
        if((collision==0))
        {   
        printf("il n'ya pas collision");
 }
        if  (collision==1)
        { printf("colliiiision");}
} }

   SDL_FreeSurface(background);
   SDL_FreeSurface(screen);
   SDL_Quit();

    return EXIT_SUCCESS;
}
 

