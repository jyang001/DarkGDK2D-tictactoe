#include "DarkGDK.h"
#include "Board.h"
#include "Player.h"
#include<iostream>
#include <stdio.h>
using namespace std;

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
	char turn = 'x';

	//dbDisableEscapeKey ();
	while (LoopGDK()) {
		if (B.GetLast() == p1.get_sign()) {
			B.Click(p2);
		}
		else if (B.GetLast() == p2.get_sign()) {
			B.Click(p1);
		}

		if (dbEscapeKey())
			break;

		dbSync();
	}
	return;
}
