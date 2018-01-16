#include "Player.h"
#include "DarkGDK.h"
#include<iostream>
#include<stdio.h>
using namespace std;

Player::Player(char input): sign(input) {}

char Player::get_sign() {
	return sign;
}