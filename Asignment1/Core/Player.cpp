#include "Player.h"
#include <stdio.h>
using namespace GAME;


Player::Player()
{
}


Player::~Player() {

}

void Player::Shoot(Weapon* w) {
	if (w) {
		printf("PEW PEW");
	}
}

void Player::equipPir(Weapon w) {
	w.Pirmary();
}

void Player::equipSec(Weapon w) {
	//w->Secondary();
}
