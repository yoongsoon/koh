#include "Dweller.h"
#include <string>
using namespace std;


Dweller::Dweller(const string & name, const int & unique)
	:GameObject(name)
{
	
	health_ = 100;
	radiation_ = 0;
	stimpak_ = 0;
	radaway_ = 0;
	outfit_ = NULL;
	weapon_ = NULL;

	string dwellerSpecial = to_string(unique);
	string output = "0000000";

	if (assignOutfit(outfit_) == NULL)
	{
		if (dwellerSpecial.size() == 7)
		{
			for (unsigned int j = 0; j < dwellerSpecial.size(); j++)
			{
				output[j] = dwellerSpecial[j] - '0' ;
				if (output[j] >9)
				{
					output[j] = 9;
				}
			}
		}
		else
		{
			throw exception("Out of range");
		}

	}
	else
	{
		string outfitSpecial = to_string(outfit_->getSPECIAL());

		if (outfitSpecial.size() == 7 && dwellerSpecial.size() == 7)
		{
			for (unsigned int i = 0; i < outfitSpecial.size(); i++)
			{
				output[i] = outfitSpecial[i]- '0' + dwellerSpecial[i] -'0';
				if (output[i] > 9)
				{
					output[i] = 9;
				}
			}
		}
		else
		{
			throw exception("Out of range");
		}
	
	}
	for (unsigned z = 0; z < output.size(); z++)
	{
		output[z] += '0';
	}


	SPECIAL_ = stoi(output);

}



Dweller :: ~Dweller()
{

}


void Dweller::receiveHealthDamage(const int  & healthdamage)
{
	if (health_ >= 0 && health_ <= 100)
	{
		health_ -= healthdamage;
	}
	if (health_ < 1)
	{
		health_ = 0;
	}

}

void Dweller::receiveRadDamage(const int & radDamage)
{
	if (radiation_ >= 0 && radiation_ <= 100)
	{
		radiation_ += radDamage;
	}
	if (health_ > (100 - radiation_))
	{
		health_ -= (100 - radiation_);
	}

}

void Dweller::receiveEquipmentDamage(const int & equipDamage)
{
	if (outfit_ == NULL)
	{

	}
	else
	{
		outfit_->receiveDamage(equipDamage);
	}
	if (weapon_ == NULL)
	{

	}
	else
	{
		weapon_->receiveDamage(equipDamage);

	}

}

int Dweller::getCurrentHealth() const
{
	return health_;
}

int Dweller::getCurrentRadDamage() const
{
	return health_;
}

int Dweller::getAttackDmg() const
{
	if (weapon_ == NULL)
		return 1;
	else
		return weapon_->getAttackDmg();
}

int Dweller::getSPECIAL() const
{
	return SPECIAL_;
}


void Dweller::addStimpak(const int &otherStimpak)
{
	stimpak_ += otherStimpak;

}

void Dweller::addRadAway(const int &otherRadAway)
{
	radaway_ += otherRadAway;
}
void Dweller::useStimpak()
{
	receiveHealthDamage(-20);

}

void Dweller::useRadAway()
{
	receiveRadDamage(-10);

}

void Dweller::setPosition(const Vec2D & otherPosition)
{
	position_ = otherPosition;
}

Vec2D Dweller::getPosition() const
{
	return position_;
}

bool Dweller::isDead()
{
	if (health_ < 1)
	{
		return true;
	}
	else
	{
		return false;
	}

}

Outfit* Dweller::assignOutfit(Outfit * wearOutfit)
{
	outfit_ = wearOutfit;

	return outfit_;
}

Weapon* Dweller::assignWeapon(Weapon * wearWeapon)
{
	weapon_ = wearWeapon;

	return weapon_;

}






