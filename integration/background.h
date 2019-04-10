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


 void initialiser_background (background *b) ;

void afficher_background (SDL_Surface *screen,  background *b);


