#include <collision.h>

int collisionBox(SDL_Rect Rebeh, SDL_Rect ennemie){
	int leftSideRebeh = Rebeh.x;
	int rightSideRebeh = Rebeh.x + Rebeh.w;
	int topRebeh = Rebeh.y;
	int bottomRebeh= Rebeh.y + Rebeh.h;

	int leftSideennemie = ennemie.x;
	int rightSideennemie = ennemie.x + ennemie.w;
	int topennemie = ennemie.y;
	int bottomennemie = ennemie.y + ennemie.h;

	if(bottomRebeh <= topennemie){
		return 0;
	}

	if(topRebeh >= bottomennemie){
		return 0;
	}

	if(rightSideRebeh <= leftSideennemie){
		return 0;
	}

	if(leftSideRebeh >= rightSideennemie){
		return 0;
	}

	return 1;
}

