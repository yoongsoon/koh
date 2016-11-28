#include "Weapon.h"

Weapon::Weapon(const string & weaponName, const int & initDurability, const int & weaponDamage)
	: Item(weaponName, initDurability), kAttackDmg(weaponDamage)
{


}

Weapon::~Weapon()
{

}

int Weapon::getAttackDmg() const
{
	return kAttackDmg;
}
