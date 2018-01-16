#include "DarkGDK.h"
#include "Board.h"
#include "Player.h"
#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

bool GameRun(string input) {
	int result = MessageBoxA (NULL, input.c_str(), "Score Screen" , MB_YESNO);
	if (result == IDYES) {
		return false;
	}
	else if (result == IDNO) 
		return true;
}

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
	int i = 0;
	
	bool condition = false; //Record user input to keep playing or not
	string message;
	bool state = false; //User Screen State

	//dbDisableEscapeKey ();
	while (LoopGDK()) {

		//win or lose conditions
		if (B.won('x')) {
			message = "X has won; Play Again?";
			state = true;
		}

		else if (B.won('o')) {
			message = "O has won; Play Again?";
			state = true;
		}

		else if (B.Full()) { 
			message = "It's a Tie; Play Again?";
			state = true;
		}
		
		if (state) {
			bool check = GameRun(message);
			if (check) //Clicked Don't Play Again
				break;

			else if (!check) { //Clicked Play Again
				B.ResetBoard();
				state = false;
				condition = false;
			}
		}

		if(dbEscapeKey() || condition) 
			break;

		if (B.GetLast() == p1.get_sign()) {
			B.Click(p2);
		}

		else if (B.GetLast() == p2.get_sign()) {
			B.Click(p1);
		}
		
		dbSync();
	}

	return;
}
