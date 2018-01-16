#ifndef PLAYER_H
#define PLAYER_H

#include "DarkGDK.h"

class Player {
	public:
		Player(char input);
		char get_sign();

	private:
		char sign;
};
#endif;


