#include "Outfit.h"


Outfit::Outfit(const string & nameOfOutfit, const int & initDurability, const int & outfitSPECIAL)   
	:Item(nameOfOutfit, initDurability), kSPECIAL(outfitSPECIAL)
{

	
}

Outfit::~Outfit()
{

}

int Outfit::getSPECIAL() const
{
	return kSPECIAL;
}