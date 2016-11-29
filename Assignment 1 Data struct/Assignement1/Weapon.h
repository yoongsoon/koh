#ifndef WEAPON_H
#define WEAPON_H
#include "Item.h"

class Weapon : public Item
{
public:
	Weapon(const string &, const int &, const int &);
	~Weapon();
	virtual void receiveDamage(const int &);
	int getAttackDmg() const;
protected:
	const int kAttackDmg;
};


#endif