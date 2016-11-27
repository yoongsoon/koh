#include "Dweller.h"



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

int Dweller::getCurrentHealth() const
{
	return health_;
}

int Dweller::getCurrentRadDamage() const
{
	return health_;
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

void Dweller::setPosition(const Vec2D & position)
{
  

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






