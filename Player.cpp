#include "Player.h"
#include<iostream>

Player::Player(char input): sign(input) {}

char Player:get_sign() {
	return sign;
}

bool Player::win() {
	return true;
}

/*
if a click was registered on the board
*/
void Player::click() {
	dbPlaySprite(11,1,4,100); //plays the 'X' sprite	
}

