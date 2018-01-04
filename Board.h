#include "Player.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
	int round;
	char B[9];
	char turn;

	public:
		Board();
		bool checkBoard(char s);
		bool Full();
		void LoadImages();
		void In_Round();
		void click(Player p);
		
		//friend class Marker;
};
#endif
//#include <DynIntStack.cpp>