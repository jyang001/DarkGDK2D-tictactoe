#include "Player.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
	int round;
	char B[9];
	char last_turn;
	int amount;

	public:
		Board();
		bool checkBoard(char s);
		bool Full();
		void LoadImages();
		void Click(Player p);
		char GetLast();
};
#endif
//#include <DynIntStack.cpp>