#include "Outfit.h"


Outfit::Outfit(const string & nameOfOutfit, const int & initDurability, const int & outfitSPECIAL)   
	:Item(nameOfOutfit, initDurability), kSPECIAL(outfitSPECIAL)
{

	
}

Outfit::~Outfit()
{

}

void Outfit::receiveDamage(const int & outfitDamg)
{  
	durability_ -= outfitDamg;

}

int Outfit::getSPECIAL() const
{
	return  durability_ <= 0 ?  0 : kSPECIAL;
}