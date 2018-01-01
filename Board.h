#include "Player.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
	int round;
	int B[3][3];
	char turn = 'o';

	public:
		Board();
		bool checkBoard(char c);
		bool Full();
		void LoadImages();
		void In_Round();
		void click();
		
		//friend class Marker;
};
#endif
//#include <DynIntStack.cpp>