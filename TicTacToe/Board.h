#include "Player.h"
#ifndef BOARD_H
#define BOARD_H

class Board {
	int turn;
	int B[3][3];

	public:
		Board();
		~Board();
		bool checkBoard();
		void LoadImages();
		//friend class Marker;
};
#endif
