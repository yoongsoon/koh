#ifndef Outfit_H
#define Outfit_h
#include "Item.h"

class Outfit : public Item
{
public:
	Outfit(const string &, const int &, const int &);
	~Outfit();
	int getSPECIAL() const;
protected:
	const int kSPECIAL;
};

#endif