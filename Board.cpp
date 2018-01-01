#include "DarkGDK.h"
#include "Player.h"
#include "Board.h"

Board::Board(): round(0) {
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
		
		for (int c = 0; c < 3; c++) {
			//vertical win condition
			if((B[c][0] == 1) && (B[c][1] == 1) && (B[c][2] == 1))	
				return true;		
			//horizontal win condition
			else if( (B[0][c] == 1) && (B[1][c] == 1) && [B[2][c] == 1) )  
				return true;
		}

		//diagnol win conditon
		if((B[0][0] == 1) && (B[1][1] == 1) && (B[2][2] == 1))
			return true;

		if((B[0][2] == 1) && (B[1][1] == 1) && (B[2][0] == 1))
			return true;
	}
	return false;
}

/*
Tie Condition: if the board is full
*/
bool Full() {
	return (turn > 9);
}


/*
enumerates images of board
*/
void Board::LoadImages() {
	dbLoadImage("all.bmp",2);
}

/*
increments round number
*/
void Board::In_Round() {
	round++;
}

void Board::click() {
	
}