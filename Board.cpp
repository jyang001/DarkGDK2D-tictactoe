#include "DarkGDK.h"
#include "Player.h"
#include "Board.h"
#include<iostream>
#include <stdio.h>
using namespace std;

Board::Board(): round(0),last_turn('o'),amount(11) {
	for (int i = 0; i < 9; i++) {
		B[i] = 'e';
	}
}

/*
checks the board for the win condition
*/
bool Board::checkBoard(char s) {
	if(round > 4) 
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
	dbLoadImage("x1.bmp",11);
	dbLoadImage("o.bmp",12);
	dbLoadImage("all.bmp",2);
}

void Board::Click(Player p) {

	if(dbMouseClick() && dbMouseX() >= 0 && dbMouseX() <= 200 && dbMouseY() >= 0 && dbMouseY() <= 200) {
		if(B[0] == 'e') {
			last_turn = p.get_sign();
			B[0] = p.get_sign();
			if (p.get_sign() == 'x') {
				dbSprite(amount,0,0,11);
			}
			else if (p.get_sign() == 'o') {
				dbSprite(amount,0,0,12);
			}
		}
	}

	if(dbMouseClick() && dbMouseX() > 200 && dbMouseX() <= 400 && dbMouseY() >= 0 && dbMouseY() <= 200) {
		if (B[1] == 'e') {
			last_turn = p.get_sign();
			B[1] = p.get_sign();
			if (p.get_sign() == 'x') {
				dbSprite(amount,200,0,11);
			}
			else if (p.get_sign() == 'o') {
				dbSprite(amount,200,0,12);
			}
		}
	}

	if(dbMouseClick() && dbMouseX() > 400 && dbMouseX() <= 600 && dbMouseY() >= 0 && dbMouseY() <= 200) {
		if (B[2] == 'e') {
			last_turn = p.get_sign();
			B[2] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,400,0,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,400,0,12);
		}
	}
	
	//2nd row
	if(dbMouseClick() && dbMouseX() >= 0 && dbMouseX() <= 200 && dbMouseY() > 200 && dbMouseY() <= 400) {
		if (B[3] == 'e') {
			last_turn = p.get_sign();
			B[3] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,0,200,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,0,200,12);
		}
	}

	if(dbMouseClick() && dbMouseX() > 200 && dbMouseX() <= 400 && dbMouseY() > 200 && dbMouseY() <= 400) {
		if (B[4] == 'e') {
			last_turn = p.get_sign();
			B[4] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,200,200,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,200,200,12);
		}
	}

	if(dbMouseClick() && dbMouseX() > 400 && dbMouseX() <= 600 && dbMouseY() > 200 && dbMouseY() <= 400) {
		if (B[5] == 'e') {
			last_turn = p.get_sign();
			B[5] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,400,200,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,400,200,12);
		}
	}

	//3rd row
	if(dbMouseClick() && dbMouseX() >= 0 && dbMouseX() <= 200 && dbMouseY() > 400 && dbMouseY() <= 600) {
		if (B[6] == 'e') {
			last_turn = p.get_sign();
			B[6] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,0,400,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,0,400,12);
		}
	}

	if(dbMouseClick() && dbMouseX() > 200 && dbMouseX() <= 400 && dbMouseY() > 400 && dbMouseY() <= 600) {
		if (B[7] == 'e') {
			last_turn = p.get_sign();
			B[7] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,200,400,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,200,400,12);
		}
	}

	if(dbMouseClick() && dbMouseX() > 400 && dbMouseX() <= 600 && dbMouseY() > 400 && dbMouseY() <= 600) {
		if (B[8] == 'e') {
			last_turn = p.get_sign();
			B[8] = p.get_sign();

			if (p.get_sign() == 'x') 
				dbSprite(amount,400,400,11);

			else if (p.get_sign() == 'o') 
				dbSprite(amount,400,400,12);
		}
	}

	amount++;
}

char Board::GetLast() {
	return last_turn;
}
