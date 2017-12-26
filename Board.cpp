#include "DarkGDK.h"
#include "Player.h"
#include "Board.h"

Board::Board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			B[i][j] = 0;
		}
	}
}

/*
checks the board for the win condition
*/
bool Board::checkBoard() {
	if(turn > 4) {
		//vertical win condition
		for (int c = 0; c < 3; c++) { 
			if((B[c][0] == 1) && (B[c][1] == 1) && (B[c][2] == 1))	
				return true;		
			/*
			//horizontal win condition
			else if( (B[0][c] == 1) && (B[1][c] == 1) && [B[2][c] == 1) ) { 
				return true;
			}
			*/
		}
		//diagnol win conditon
		if((B[0][0] == 1) && (B[1][1] == 1) && (B[2][2] == 1))
			return true;
		if((B[0][2] == 1) && (B[1][1] == 1) && (B[2][0] == 1))
			return true;
	}
	return false;
}

void Board::LoadImages() {
	dbLoadImage("all.bmp",2);
	dbLoadImage("all.bmp",3);
	dbLoadImage("all.bmp",4);
	dbLoadImage("all.bmp",5);
	dbLoadImage("all.bmp",6);
	dbLoadImage("all.bmp",7);
	dbLoadImage("all.bmp",8);
	dbLoadImage("all.bmp",9);
	dbLoadImage("all.bmp",10);
}