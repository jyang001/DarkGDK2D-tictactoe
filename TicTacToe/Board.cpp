#include "darkgdk.h"
#include "Player.h"
#include "Board.h"

Board::Board() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			B[i][j] = 0;
		}
	}
}

bool Board::checkBoard() {
	if(turn > 4) {
		//check vertical
		for (int c = 0; c < 3; c++) { //keep track of coordinate
			//checks vertical rows
			if((B[c][0] == 1) && (B[c][1] == 1) && (B[c][2] == 1))	
				return true;
			//checks horizontal rows
			/*
			else if( (B[0][c] == 1) && (B[1][c] == 1) && [B[2][c] == 1) ) {
				return true;
			}
			*/
		}

			//check diagnol
		if((B[0][0] == 1) && (B[1][1] == 1) && (B[2][2] == 1))
			return true;
		if((B[0][2] == 1) && (B[1][1] == 1) && (B[2][0] == 1))
			return true;
	}
	return false;
}

void Board::LoadImages() {
	dbLoadImage("1.bmp",2);
	dbLoadImage("2.bmp",3);
	dbLoadImage("3.bmp",4);
	dbLoadImage("5.bmp",5);
	dbLoadImage("5.bmp",6);
	dbLoadImage("6.bmp",7);
	dbLoadImage("8.bmp",8);
	dbLoadImage("8.bmp",9);
}