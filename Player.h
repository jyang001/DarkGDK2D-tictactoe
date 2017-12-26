#ifndef PLAYER_H
#define PLAYER_H
class Player {
	public:
		Player(char input);
		void draw();
		bool win();

	private:
		char sign;
};
#endif;


