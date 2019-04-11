 
#include <SDL/SDL.h>
#include <stdio.h>
#include<SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include<SDL/SDL_image.h>
#include<stdlib.h>
  /* Structure pour gérer Rebah */ 
   typedef struct Player
   {
       //Sprite du héros
      SDL_Surface *image[2][5];
      SDL_Surface *imageActuel;

       /* Coordonnées du héros */
      
       SDL_Rect position;
     /* Variables utiles pour l'animation */
       int fram;
     
      /* Largeur, hauteur du sprite */
       int h,w;

   }Player;   

