#include "Dweller.h"
#include  <vector>
#include <algorithm>


Dweller::Dweller(const string & name, const int & unique)
{
	name_ = name; 
	SPECIAL_ = unique;  
	health_ = 100;
	radiation_ = 0;
	stimpak_ = 0;
	radaway_ = 0;
	outfit_ = NULL;
	weapon_ = NULL;

	//int temporary = unique;
	//std::vector<int>  storageValue;

	//while (temporary > 0)
	//{
	//	int digit = temporary % 10;  // eg. 12345 % 10 = 5 (extract from  last digit to first digit ) 
	//	                            //   1234 % 10 = 4
	//                                //  123  % 10 =3

	//	temporary /= 10;             // 12345 /10 =  1234
	//	storageValue.push_back(digit);  // 1234 /10 = 123
	//	                            
	//}

	//// reverse order of elements
	//// e.g  1,2,3,4,5 will be reverse to
	//// 5,4,3,2, 1 , where 5 is now the  0th element
	//std::reverse(storageValue.begin(), storageValue.end());

	

	
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


}

Weapon* Dweller::assignWeapon(Weapon * wearWeapon)
{


}






