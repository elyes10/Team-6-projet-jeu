#include "menu.h"


 
int showmenu(SDL_Surface* screen,Mix_Music* music)
{
  SDL_Surface *play=NULL,*settings=NULL,*credits=NULL,*exit=NULL,*cursor=NULL,*menu=NULL;
   
    SDL_Rect position,playpos,settingspos,creditspos,exitpos,cursorpos;
    SDL_Event event;
    
    int continuer = 1,i,test=0;
    int selected[4];
    int x,y;
	
        position.x=0;
 	position.y=0;
	playpos.x=360;
	playpos.y=100;
	settingspos.x=360;
	settingspos.y=200;
	creditspos.x=360;
	creditspos.y=300;
	exitpos.x=360;
	exitpos.y=400;
	cursorpos.x=360;
	cursorpos.y=playpos.y-10;
	test++;
        menu=IMG_Load("Menu.png");
        cursor=IMG_Load("Cursor.png");
        play=IMG_Load("button1/Play.png");
	settings=IMG_Load("button1/Settings.png");
	credits=IMG_Load("button1/Credits.png");
	exit=IMG_Load("button1/EXIT.png");
  
   SDL_BlitSurface(menu,NULL,screen,&position);
   SDL_BlitSurface(cursor,NULL,screen,&cursorpos);
   SDL_BlitSurface(play,NULL,screen,&playpos);
   SDL_BlitSurface(settings,NULL,screen,&settingspos);
   SDL_BlitSurface(credits,NULL,screen,&creditspos);
   SDL_BlitSurface(exit,NULL,screen,&exitpos);




if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{printf("%s",Mix_GetError());}

music=Mix_LoadMUS("MusiqueMenu.mp3");
Mix_PlayMusic (music,-1);
   
   

	while(1)
	{
     


                while(SDL_PollEvent(&event))
                {

                        switch(event.type)
                        {
                                case SDL_QUIT:
				SDL_QUIT;
					return(0);
					
                                        	
                                        break;
                                case SDL_MOUSEMOTION:
                                        x = event.motion.x;
                                        y = event.motion.y;
					if(x>=playpos.x && x<=playpos.x+playpos.w && y>=playpos.y && y<=playpos.y+playpos.h)
						{
                                                
							play=IMG_Load("button2/Play1.png");
							cursorpos.y=playpos.y-10;
						}
						else
							play=IMG_Load("button1/Play.png");
				 	
					if(x>=settingspos.x && x<=settingspos.x+settingspos.w && y>=settingspos.y && y<=settingspos.y+settingspos.h)
						{
                                                
							settings=IMG_Load("button2/Settings1.png");
							cursorpos.y=settingspos.y-10;
						}
						else
							settings=IMG_Load("button1/Settings.png");
					if(x>=creditspos.x && x<=creditspos.x+creditspos.w && y>=creditspos.y && y<=creditspos.y+creditspos.h)
						{
                                                
							credits=IMG_Load("button2/Credits1.png");
							cursorpos.y=creditspos.y-10;
						}
						else
							credits=IMG_Load("button1//Credits.png");
					if(x>=exitpos.x && x<=exitpos.x+exitpos.w && y>=exitpos.y && y<=exitpos.y+exitpos.h)
						{
                                                
							exit=IMG_Load("button2/EXIT1.png");
							cursorpos.y=exitpos.y-10;
						}
						else
							exit=IMG_Load("button1/EXIT.png");
					break;
				case SDL_MOUSEBUTTONUP:
        			if ((event.button.button == SDL_BUTTON_LEFT)&&(x>=exitpos.x && x<=exitpos.x+exitpos.w && y>=exitpos.y && y<=exitpos.y+exitpos.h))
										{
					SDL_FreeSurface(menu);
					SDL_FreeSurface(cursor);
					SDL_FreeSurface(settings);
					SDL_FreeSurface(credits);
					SDL_FreeSurface(play);
					SDL_FreeSurface(exit);

					return(0);
                                        
					}
            			
				if ((event.button.button == SDL_BUTTON_LEFT)&&(x>=playpos.x && x<=playpos.x+playpos.w && y>=playpos.y && y<=playpos.y+playpos.h))	
					{printf("baaaaa");
					SDL_FreeSurface(menu);
					SDL_FreeSurface(cursor);
					SDL_FreeSurface(settings);
					SDL_FreeSurface(credits);
					SDL_FreeSurface(play);
					SDL_FreeSurface(exit);				     
					return(2);
                                        
					}

				
        			if ((event.button.button == SDL_BUTTON_LEFT)&&(x>=settingspos.x && x<=settingspos.x+settingspos.w && y>=settingspos.y && y<=settingspos.y	+settingspos.h))
										{
					SDL_FreeSurface(menu);
					SDL_FreeSurface(cursor);
					SDL_FreeSurface(settings);
					SDL_FreeSurface(credits);
					SDL_FreeSurface(play);
					SDL_FreeSurface(exit);
					Mix_FreeMusic(music);

					return(3);
                                        
					}
				break;
						
			}

		   SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,255,255,255));
		   SDL_BlitSurface(menu,NULL,screen,&position);
		   SDL_BlitSurface(play,NULL,screen,&playpos);
		   SDL_BlitSurface(settings,NULL,screen,&settingspos);
		   SDL_BlitSurface(credits,NULL,screen,&creditspos);
		   SDL_BlitSurface(exit,NULL,screen,&exitpos);
		   SDL_BlitSurface(cursor,NULL,screen,&cursorpos);
		   SDL_Flip(screen);
		  


                
 		
	}
   	  }

	
	return(continuer);
	
	

 

}
