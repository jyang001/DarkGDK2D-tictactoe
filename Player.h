#ifndef PLAYER_H
#define PLAYER_H

#include "DarkGDK.h"

class Player {
	public:
		Player(char input);
		void click();
		char get_sign();
		int get_amount();

	private:
		char sign;
		int amount;
};
#endif;


