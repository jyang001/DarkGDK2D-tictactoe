#include "DarkGDK.h"
#include "Player.h"
#include "Board.h"
#include<iostream>
#include <stdio.h>
using namespace std;

Board::Board(): round(0), turn('o') {
	for (int i = 0; i < 9; i++) {
		B[i] = 'e';
	}
}

/*
checks the board for the win condition
*/
bool Board::checkBoard(char s) {
	if(turn > 4) 
		return true;
	return false;
}

/*
Tie Condition: if the board is full
*/
bool Board::Full() {
	return (round > 9);
}


/*
enumerates images of board
*/
void Board::LoadImages() {
	dbLoadImage("all.bmp",2);
	dbLoadImage("x1.bmp",11);
}

/*
increments round number
*/
void Board::In_Round() {
	round++;
}

/*
Determines where the click was registered on the board
Draws the Sprite
*/
void Board::click(Player p) {
	if(dbMouseClick() && dbMouseMoveX() >= 0 && dbMouseMoveX() <= 200 && dbMouseMoveY() >= 0 && dbMouseMoveY() <= 200) {
		p.draw(0,0);
	}
}