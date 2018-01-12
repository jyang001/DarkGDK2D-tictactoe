#include "Player.h"
#include "DarkGDK.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Player::Player(char input): sign(input), amount(10) {}

char Player::get_sign() {
	return sign;
}

int Player::get_amount() {
	return amount;
}