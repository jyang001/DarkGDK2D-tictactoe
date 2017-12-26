#include "Player.h"
#include<iostream>
Player::Player(char input): sign(input) {}

void Player::draw() {
	/*
	if (sign == 'x') {
	
	}
	
	else if(sign == 'o') {
	
	}
	*/
	std::cout <<"fish\n";
}


bool Player::win() {
	return true;
}