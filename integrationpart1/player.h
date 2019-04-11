  #include "structs.h"

 /* Prototypes des fonctions utilisées */
Player InitPlayer(Player Hero);
void AfficherPlayer(Player Hero,SDL_Surface *screen);
void pause();
void Afficherbackground(Player Hero,SDL_Surface* screen);
Player AnimatePlayer(Player Hero,int direction);
Player MovePlayer(Player Hero,int direction);



