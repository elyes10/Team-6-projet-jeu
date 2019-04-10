#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "option.h"



void option (SDL_Surface *screen)

{
int son;
int continuer;
SDL_Surface *ecran = NULL, *background=NULL,*Bouton1=NULL,*Bouton2=NULL,*Bouton3=NULL,*Bouton4=NULL,*Bouton5=NULL,*Bouton11=NULL,*Bouton1a=NULL,*Bouton2a=NULL,*Bouton22=NULL,*Bouton3a=NULL,*Bouton33=NULL,*Bouton4a=NULL,*Bouton44=NULL,*Bouton5a=NULL,*Bouton55=NULL;
SDL_Init(SDL_INIT_VIDEO);
SDL_Rect posbg,posb1,posb2,posb3,posb4,posb5;

Mix_Music *musique;

posbg.x=0;
posbg.y=0;

posb1.x=510;
posb1.y=185;
posb2.x=435;
posb2.y=112;
posb3.x=514;
posb3.y=40;
posb4.x=15;
posb4.y=0;
posb5.x=15;
posb5.y=106;
Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024);
musique=Mix_LoadMUS("musique.mp3");
Mix_PlayMusic(musique,-1);


ecran = SDL_SetVideoMode(720,520,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
SDL_WM_SetCaption("SETTINGS", NULL);

background = IMG_Load("fond.png");
Bouton1=IMG_Load("image/0.png");
Bouton2=IMG_Load("image/50.png");
Bouton3=IMG_Load("image/100.png");
Bouton4=IMG_Load("image/bg.png");
Bouton5=IMG_Load("image/back.png");
Bouton1a=IMG_Load("image/0a.png");
Bouton2a=IMG_Load("image/50a.png");
Bouton3a=IMG_Load("image/100a.png");
Bouton4a=IMG_Load("image/bga.png");
Bouton5a=IMG_Load("image/backa.png");
SDL_BlitSurface(background,NULL,ecran,&posbg);
SDL_BlitSurface(Bouton1,NULL,ecran,&posb1);
SDL_BlitSurface(Bouton2,NULL,ecran,&posb2);
SDL_BlitSurface(Bouton3,NULL,ecran,&posb3);
SDL_BlitSurface(Bouton4,NULL,ecran,&posb4);
SDL_BlitSurface(Bouton5,NULL,ecran,&posb5);
SDL_Flip(ecran);

son=1;
SDL_Event event;






while(continuer)
{
   while(SDL_PollEvent(&event))
{
	switch(event.type)
		{
			case SDL_QUIT:
			continuer=0;
			break;
		}
}
	if(event.motion.x<680 && event.motion.x>630 && event.motion.y<320 && event.motion.y>250)
	{
		Bouton11=Bouton1a;
		if(event.button.button==SDL_BUTTON_LEFT)
		{
		son=1;
		Mix_VolumeMusic(0);
		}
	}
	
	else if(event.motion.x<610 && event.motion.x>550 && event.motion.y<240 && event.motion.y>170)
	{
		Bouton22=Bouton2a;
		if(event.button.button==SDL_BUTTON_LEFT)
		{
		son=2;
		Mix_VolumeMusic(64);
		}
	}
	
	else if(event.motion.x<680 && event.motion.x>630 && event.motion.y<170 && event.motion.y>100)
	{
		Bouton33=Bouton3a;
		if(event.button.button==SDL_BUTTON_LEFT)
		{
		son=0;
		Mix_VolumeMusic(128);
		}
	}

	else if(event.motion.x<285 && event.motion.x>20 && event.motion.y<150 && event.motion.y>50)
	{
		Bouton44=Bouton4a;
		if(event.button.button==SDL_BUTTON_LEFT)
		{
			if(Mix_PausedMusic() == 1)
				Mix_ResumeMusic();
				else
				 Mix_PauseMusic(); 
		
		}
	}
	
	else if(event.motion.x<285 && event.motion.x>20 && event.motion.y<245 && event.motion.y>170)
	{
		Bouton55=Bouton5a;
		if(event.button.button==SDL_BUTTON_LEFT)
		continuer=1;
	}
	else
	{
		Bouton11=Bouton1;
		Bouton22=Bouton2;
		Bouton33=Bouton3;
		Bouton44=Bouton4;
		Bouton55=Bouton5;
	}
	

SDL_BlitSurface(background,NULL,ecran,&posbg);
SDL_BlitSurface(Bouton11,NULL,ecran,&posb1);
SDL_BlitSurface(Bouton22,NULL,ecran,&posb2);
SDL_BlitSurface(Bouton33,NULL,ecran,&posb3);
SDL_BlitSurface(Bouton44,NULL,ecran,&posb4);
SDL_BlitSurface(Bouton55,NULL,ecran,&posb5);
SDL_Flip(ecran);
}
SDL_FreeSurface(background);
SDL_FreeSurface(Bouton11);
SDL_FreeSurface(Bouton22);
SDL_FreeSurface(Bouton33);
SDL_FreeSurface(Bouton44);
SDL_FreeSurface(Bouton55);
SDL_FreeSurface(Bouton1);
SDL_FreeSurface(Bouton2);
SDL_FreeSurface(Bouton3);
SDL_FreeSurface(Bouton4);
SDL_FreeSurface(Bouton5);
SDL_FreeSurface(Bouton1a);
SDL_FreeSurface(Bouton2a);
SDL_FreeSurface(Bouton3a);
SDL_FreeSurface(Bouton4a);
SDL_FreeSurface(Bouton5a);


}






 






