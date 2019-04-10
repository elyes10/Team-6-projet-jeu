
#include "collision.h"
#include "player.h"
#include "main.h"








int main(void)
{
struct background b;
SDL_Rect camera_pos;
camera_pos.x=0;
camera_pos.y=0;
camera_pos.w=960;   //depend de la length de la fenetre
camera_pos.h=535;



SDL_Surface *background;

SDL_Surface *screen = NULL;



//b-> b = NULL;
//Player Hero;
  




int continuer = 1;
int ahmed=1;
SDL_Event event;

SDL_Init(SDL_INIT_VIDEO);
screen = SDL_SetVideoMode(952,535, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

Mix_Music* music;
while (ahmed=1)
{
     
 while (continuer==1)
    {
        
        continuer=showmenu(screen,music);
    }

printf("%d",continuer);
 while (continuer == 2)
    {   

	printf("11");

	//continuer=afficherbackground(screen);
 //initialiser_background (&b) ;
//afficher_background (screen,&b);
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
            if((event.key.keysym.sym==SDLK_RIGHT) && (camera_pos.x=20))
{ direction=0; camera_pos.x+=30;

}
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
while (continuer==3)
	{
 
option(screen);
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
	}


 
    
   
}
     Mix_FreeMusic(music);
    Mix_CloseAudio();
   SDL_FreeSurface(screen);
    SDL_Quit();

    return EXIT_SUCCESS;
}



		   
						

   
























