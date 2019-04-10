#include "player.h"
Player InitPlayer(Player Hero)
{
  Hero.image[0][0]=IMG_Load("WalkRightRebah1.png");
  Hero.image[0][1]=IMG_Load("WalkRightRebah2.png");
  Hero.image[0][2]=IMG_Load("WalkRightRebah3.png");
  Hero.image[0][3]=IMG_Load("WalkRightRebah4.png");
  Hero.imageActuel=Hero.image[0][0];
  Hero.position.x=0;
  Hero.position.y=360;
Hero.w=166;
Hero.h=187;
  Hero.fram=0;
  return Hero;
}
void pause()
{
    int continuer=1;
    SDL_Event event;
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch (event.type)
        {
            case SDL_QUIT:
                continuer=0;
        }
    }
}
void AfficherPlayer(Player Hero , SDL_Surface *screen)
{
  SDL_BlitSurface(Hero.imageActuel,NULL,screen,&Hero.position);

}
void Afficherbackground(Player Hero,SDL_Surface* screen)

{
   int x,y;
   SDL_Surface *background=NULL;
   SDL_Rect position;
   position.x=0;
   position.y=0;
  background=IMG_Load("lvl1.png");
  SDL_BlitSurface(background,NULL,screen,&position);
  AfficherPlayer(Hero,screen);
  SDL_Flip(screen);
}

Player AnimatePlayer(Player Hero,int direction)
{
  if(Hero.fram==3)
  {
    Hero.fram=0;
  }
  else
  {
    Hero.fram++;
  }

  Hero.imageActuel=Hero.image[0][Hero.fram];
  return Hero;
}


Player MovePlayer(Player Hero,int direction)
{
  if(direction==0)
  {printf("%d\n",Hero.position.x );
      Hero.position.x+=20;
  }
  else if(direction==1)
  {
      Hero.position.x-=20;
  }
  if(direction==2)
    Hero.position.y-=20;
  else if(direction==3)
    Hero.position.y+=20;
  return Hero;
}
