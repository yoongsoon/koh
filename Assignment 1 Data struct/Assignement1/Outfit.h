#ifndef OUTFIT_H
#define OUTFIT_H
#include "Item.h"

class Outfit : public Item
{
public:
	Outfit(const string &, const int &, const int &);
	~Outfit();
	virtual void receiveDamage(const int &);
	int getSPECIAL() const;
protected:
	const int kSPECIAL;
};

#endif