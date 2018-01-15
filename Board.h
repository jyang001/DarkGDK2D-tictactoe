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
		bool won(char s);
		bool Full();
		//char won();
		void LoadImages();
		void Click(Player p);
		char GetLast();
};
#endif
//#include <DynIntStack.cpp>