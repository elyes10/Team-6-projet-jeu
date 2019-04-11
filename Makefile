prog:Main.o Collision.o player.o 
	gcc Main.o Collision.o player.o -lm -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -o prog

Main.o:Main.c
	gcc -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -c Main.c

Collision.o:Collision.c
	gcc -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -c Collision.c
player.o:player.c
	gcc -lSDL -lSDL_image -lSDL_ttf -lSDL_mixer -c player.c

