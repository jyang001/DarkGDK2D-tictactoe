#ifndef PLAYER_H
#define PLAYER_H

class Player {
	public:
		Player(char input);
		void click();
		char get_sign();
		void draw();
		bool win();

	private:
		char sign;
};
#endif;


