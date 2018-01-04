#ifndef PLAYER_H
#define PLAYER_H

#include "DarkGDK.h"

class Player {
	public:
		Player(char input);
		void click();
		char get_sign();
		void draw(int x, int y);
		bool win();

	private:
		char sign;
};
#endif;


