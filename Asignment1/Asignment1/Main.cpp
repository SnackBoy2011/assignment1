#include "Engine.h"
#include "Weapon.h"
#include "Player.h"
#include <stdio.h>
using namespace GAME;

int main(int argc, char* argv[]) {
	Engine eg;
	Player player;
	Weapon w1;

	player.equipPir(w1);
	//player.equipSec();

	player.Shoot(&w1);
	//eg.print();
	getchar();
	return 0;

}