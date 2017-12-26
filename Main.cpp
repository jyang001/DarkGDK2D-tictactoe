#include "DarkGDK.h"
#include "Board.h"
#include "Player.h"

void DarkGDK (void) {
	dbSyncOn();
	dbSyncRate(60);
	dbDisableEscapeKey();
	
	dbSetImageColorKey(255,0,255);

	dbSetWindowTitle("Tic Tac Toe Battle");
	dbSetDisplayMode(600,600,0);	
	
	//load background
	
	dbLoadImage("background.bmp",1);
	dbSprite(1,0,0,1);

	Board B;
	B.LoadImages();

	dbSprite(2,0,0,2);
	dbSprite(3,200,0,3);
	dbSprite(4,400,0,4);//
	dbSprite(5,0,200,5);//
	dbSprite(6,200,200,6);
	dbSprite(7,400,200,7);
	dbSprite(8,0,400,8);
	dbSprite(9,200,400,9);
	dbSprite(10,400,400,10);

	dbLoadImage("1.bmp",11);
	dbCreateAnimatedSprite(11,"1.bmp",2,2,11); //b4 dbSprite()
	dbSprite(11,0,0,11);
	
	//dbDisableEscapeKey ();
	while (LoopGDK()) {
		if ((dbMouseClick() == 1) && (dbMouseX() < 200) && (dbMouseY() < 200)) {
			dbPlaySprite(11,1,4,100);	
		}
		
		/*
		if (dbUpKey() == 1) {
			dbPlaySprite(2,1,4,100);
		}
		else {
			dbSetSpriteFrame(2,1);
		}
		*/

		//Player p1("x");
		//Player p2("o");
		if (dbEscapeKey())
			break;

		dbSync();
	}
	return;
}
