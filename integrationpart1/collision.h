#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

SDL_Color GetPixel(SDL_Surface *surface,int x,int y);
int collision_Parfaite(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,int d);

