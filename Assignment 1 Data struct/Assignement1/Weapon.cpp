#include "Weapon.h"

Weapon::Weapon(const string & weaponName, const int & initDurability, const int & weaponDamage)
	: Item(weaponName, initDurability), kAttackDmg((weaponDamage < 0) ? 0 : weaponDamage)
{
  

}

Weapon::~Weapon()
{

}

void Weapon::receiveDamage(const int & weapondDamg)
{
	 durability_ -= weapondDamg / 2;

}

int Weapon::getAttackDmg() const
{
	return durability_ <=0 ? 1 : kAttackDmg;
}
