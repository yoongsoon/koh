#include "Item.h"

Item::Item(const string & itemName, const int & initDurability)
	:GameObject(itemName)
{
	durability_ = initDurability;
}

Item::~Item()
{


}

void Item::receiveDamage(const int & damg)
{
	durability_ -= damg;

}

int Item::getDurability() const
{
	return durability_;
}