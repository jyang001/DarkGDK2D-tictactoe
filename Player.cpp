#include "Player.h"
#include "DarkGDK.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Player::Player(char input): sign(input) {}

char Player::get_sign() {
	return sign;
}

bool Player::win() {
	return true;
}

/*
Draws Sprite
*/
void Player::draw(int x, int y) {
	dbSprite(11,x,y,11);
	/*
	if (sign == 'x') {
		dbCreateAnimatedSprite(11,"x.bmp",2,2,11); //b4 dbSprite()
		dbSprite(11,x,y,11);
		for (int i = 1; i < 5; i++) {
			dbPlaySprite(11,1,4,100); //plays the 'X' sprite
		}
	}
	else if (sign == 'o') {
		dbCreateAnimatedSprite(11,"x.bmp",2,2,11); //b4 dbSprite()
		dbSprite(11,0,0,11);
		for (int i = 1; i < 5; i++) {
			dbPlaySprite(11,1,4,100); //plays the 'X' sprite
		}
	}
	*/
}

