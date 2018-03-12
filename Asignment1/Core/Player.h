#pragma once
#include "Weapon.h"
namespace GAME {
	class Player
	{
	public:
		Player();
		~Player();

		//Weapon* weapon;

		//void Equip(Weapon* w);
		void Shoot(Weapon* w);
		void equipPir(Weapon w);
		void equipSec(Weapon w);
	};
}
