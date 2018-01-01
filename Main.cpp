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
	Player p1('x');
	Player p2('o');
	
	B.LoadImages();

	dbSprite(2,0,0,2);
	dbSprite(3,200,0,2);
	dbSprite(4,400,0,2);
	dbSprite(5,0,200,2);
	dbSprite(6,200,200,2);
	dbSprite(7,400,200,2);
	dbSprite(8,0,400,2);
	dbSprite(9,200,400,2);
	dbSprite(10,400,400,2);

	dbLoadImage("x.bmp",11);
	dbCreateAnimatedSprite(11,"x.bmp",2,2,11); //b4 dbSprite()
	dbSprite(11,0,0,11);
	
	//dbDisableEscapeKey ();
	while (LoopGDK()) {
		p1.click();
		p2.click();

		if (dbEscapeKey())
			break;

		dbSync();
	}
	return;
}
