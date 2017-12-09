#include "DarkGDK.h"
#include "Board.h"
#include "Player.h"

void DarkGDK (void)
{
	dbSyncOn();
	dbSyncRate(60);
	dbDisableEscapeKey();
	
	dbSetImageColorKey(255,0,255);

	dbSetWindowTitle("Tic Tac Toe Battle");
	dbSetDisplayMode(600,600,0);	
	
	//load background
	
	dbLoadImage("background.bmp",1);
	/*
	Board B;
	B.LoadImages();

	dbSprite(1,0,0,1);

	dbSprite(2,0,0,2);
	dbSprite(3,200,0,3);
	dbSprite(4,400,0,4);//
	dbSprite(5,0,200,5);//
	dbSprite(6,200,200,6);
	dbSprite(7,400,200,7);
	dbSprite(8,0,400,8);
	dbSprite(9,200,400,9);
	*/
	
	dbCreateAnimatedSprite(2,"Animation.bmp",3,1,2); //b4 dbSprite()
	dbSprite(2,100,50,2);
	dbPlaySprite(2,1,3,100);	

	//dbDisableEscapeKey ();
	while (LoopGDK()) {
		//Player p1("x");
		//Player p2("o");
		if (dbEscapeKey())
			break;
		dbSync();
	
	/*
	dbDeleteImage(1);
	dbDeleteSprite(1);
	dbDeleteImage(2);
	dbDeleteSprite(2);
	*/
	}
	
	return;
}
