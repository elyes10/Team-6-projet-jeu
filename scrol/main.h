#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <math.h> // ajouter -lm pour compiler
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>


  typedef struct  background
  {
  		 SDL_Surface *background;
        SDL_Surface *mask;
  	   SDL_Rect camera;
  }background;


typedef struct  stat
{
SDL_Surface *separateur;
SDL_Rect separateur_pos;
SDL_Surface *stage;
TTF_Font *font_stage;
SDL_Rect stage_pos;
SDL_Surface *icon;
SDL_Rect icon_pos;
SDL_Surface *lives;
TTF_Font *font_lives;
SDL_Rect lives_pos;
}stat;
