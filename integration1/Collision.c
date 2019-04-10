#include "collision.h"
#include <math.h>
#include "structs.h"


SDL_Color GetPixel(SDL_Surface *surface,int x,int y)
{
	SDL_Color color ;
	Uint32 col = 0 ;

	//determine position
	char* pPosition = ( char* ) surface->pixels ;
        
	//offset by y
	pPosition += ( surface->pitch * y ) ;

	//offset by x
	pPosition += ( surface->format->BytesPerPixel * x ) ;

	//copy pixel data
	memcpy ( &col , pPosition , surface->format->BytesPerPixel ) ;

	//convert color
	SDL_GetRGB ( col , surface->format , &color.r , &color.g , &color.b ) ;
 printf("%d    %d   %d\n",color.r,color.b,color.g);
	return ( color ) ;
}
int collision_Parfaite(SDL_Surface *calque,SDL_Surface *perso,SDL_Rect posperso,int d)
{
  SDL_Color col;
  if(d==0)//imin
  {
    col=GetPixel(calque,posperso.x+perso->w-100,posperso.y+(perso->h));
  }
else  if(d==1)//issarr
  {
    col=GetPixel(calque,posperso.x,posperso.y+(perso->h/2));
  }
else  if(d==2)//lfou9
  {
    col=GetPixel(calque,posperso.x+(perso->w/2),posperso.y);
  }
else  if(d==3)//louta
  {
    col=GetPixel(calque,posperso.x+(perso->w/2),posperso.y+perso->h);
  }
  printf("%d    %d   %d\n",col.r,col.b,col.g);
if ((col.r==0)&&(col.b==0)&&(col.g==0))
{  
printf ("ahaaaaaaaaaaah");
 return 1;
}
else 
printf("Ouhouuuuu");
return 0;
}
