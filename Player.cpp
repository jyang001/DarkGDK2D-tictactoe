#include "Player.h"
#include "DarkGDK.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Player::Player(char input): sign(input), amount(10) {}

char Player::get_sign() {
	return sign;
}

/*
Draws Sprite
*/

/*
void Player::draw(int x, int y) { //parameters int x, int y
	if(sign == 'x') {
		amount++;
		dbSprite(amount,x,y,12);
	}
	if(sign == 'o') {
		amount+=2;
		dbSprite(amount,x,y,11);
	}
}
*/

int Player::get_amount() {
	return amount;
}