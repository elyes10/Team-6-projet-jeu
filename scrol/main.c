#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <math.h> // ajouter -lm pour compiler
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "main.h"

int mvt_speed=20;
int perso_stop=400;
int size_bg=10000;
//background


 

  void set_background (SDL_Surface *screen,background  *b)
  {
    b->camera.x=0;
    b->camera.y=-80;
    b->camera.w=1000;
    b->camera.h=600;
  }

  void scroll_background_forward (SDL_Surface *screen,background  *b,int size_bg)
  {
    if (b->camera.x<=size_bg-b->camera.w-mvt_speed)
    b->camera.x+=mvt_speed;

  }

  void scroll_background_backward (SDL_Surface *screen,background  *b)
  {
  if (b->camera.x>= mvt_speed)

    b->camera.x-=mvt_speed;

  }

  void afficher_background (SDL_Surface *screen,background  *b)
  {
    SDL_BlitSurface(b->background,&b->camera,screen,NULL);
  }

//stats

  int nb_life=3;

/*
void initialiser_stats (stat *s,SDL_Surface *fenetre)
{
  SDL_Color color={255,255,255};
  s->icon=IMG_Load("heart.jpeg");
  s->font_lives=TTF_OpenFont("font_lives.ttf",30);
TTF_SetFontStyle(s->font_lives,TTF_STYLE_NORMAL);
  s->font_stage=TTF_OpenFont("font_stage.ttf",40);
TTF_SetFontStyle(s->font_stage,TTF_STYLE_BOLD);
s->stage=TTF_RenderText_Solid(s->font_stage,"Stage 1 ",color);
  s->separateur=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,1000,5,32,0,0,0,0);
  SDL_FillRect(s->separateur,NULL,SDL_MapRGB(fenetre->format,255,255,255));

  char remaining[2];
  sprintf(remaining,"%d",nb_life);
  s->lives=TTF_RenderText_Solid(s->font_lives,remaining,color);
sprintf(remaining,"%d",nb_life);
  s->lives=TTF_RenderText_Solid(s->font_lives,remaining,color);
  SDL_BlitSurface(s->lives,NULL,fenetre,&s->lives_pos);


  s->separateur_pos.x=0;
  s->separateur_pos.y=75;
s->stage_pos.x=50;
s->stage_pos.y=25;
  s->lives_pos.x=375;
  s->lives_pos.y=25;
  s->icon_pos.x=300;
  s->icon_pos.y=15;

}


void afficher_static_stats (stat *s,SDL_Surface *fenetre)
{
  SDL_BlitSurface(s->separateur,NULL,fenetre,&s->separateur_pos);
  SDL_BlitSurface(s->icon,NULL,fenetre,&s->icon_pos);
  SDL_BlitSurface(s->stage,NULL,fenetre,&s->stage_pos);
}

void afficher_dynamic_stats (stat *s,SDL_Surface *fenetre)
{
  SDL_Color color={255,255,255};
  char remaining[2];
  sprintf(remaining,"%d",nb_life);
s->lives=TTF_RenderText_Solid(s->font_lives,remaining,color);
SDL_BlitSurface(s->lives,NULL,fenetre,&s->lives_pos);
}

*/

void stage_1 (SDL_Surface *screen) //englobe tout le stage
{
  TTF_Init();
  //music
  Mix_OpenAudio(22050,MIX_DEFAULT_FORMAT,2,1024);//1 -> mono ** 2 -> sterio
  Mix_Music *music;
  music= Mix_LoadMUS("stage1.mp3");
  Mix_PlayMusic(music,-1);

//backgroud init
  background bg;
  bg.background=IMG_Load("background-1.png");
    bg.mask=IMG_Load("mask-background-1.png");
  set_background (screen,&bg);


/*
//stats init
    stat st;
initialiser_stats (&st,screen);
*/


//perso init

//main loop
int done=1;
SDL_Event event;
while(done)
{
  //afficher_static_stats (&st,screen);
  //afficher_dynamic_stats (&st,screen);
afficher_background (screen,&bg);


  while (SDL_PollEvent(&event))
  {
  switch(event.type)
{
case SDL_QUIT :
done=0;
break;
case SDL_KEYDOWN:
  switch(event.key.keysym.sym){

    case SDLK_RIGHT:
    scroll_background_forward (screen,&bg,size_bg);
    break;

    case SDLK_LEFT:
     scroll_background_backward (screen,&bg);
    break;

}//end keydown
}//end switch
}//end event

SDL_Flip(screen);
SDL_Delay(33);
}//end while

//free

SDL_FreeSurface (bg.background);
Mix_FreeMusic (music);
TTF_Quit();
}

int main()
{
SDL_Init(SDL_INIT_VIDEO);
//fenetre principale
SDL_Surface *screen;
screen=SDL_SetVideoMode (1000,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_WM_SetCaption("LEVEL1",NULL);//titre de la fenetre

stage_1 (screen);

SDL_Quit();
return 0 ;
}
