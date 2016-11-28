#ifndef DWELLER_H
#define DWELLER_H
#include "GameObject.h"
#include "Vec2D.h"
#include "Outfit.h"
#include "Weapon.h"

class Dweller : public GameObject
{
public:
	Dweller(const string &, const int &);
	~Dweller();
	int getSPECIAL() const;
	int getCurrentHealth() const;
	int getCurrentRadDamage() const;
	int getAttackDmg() const;
	void setPosition(const Vec2D &);
	Vec2D getPosition() const;
	void receiveHealthDamage(const int &);
	void receiveRadDamage(const int &);
	void receiveEquipmentDamage(const int &);
	void addStimpak(const int &);
	void addRadAway(const int &);
	void useStimpak();
	void useRadAway();
	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);
	bool isDead();


protected:
	Vec2D position_;
	string name_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit * outfit_;
	Weapon * weapon_;
};
#endif