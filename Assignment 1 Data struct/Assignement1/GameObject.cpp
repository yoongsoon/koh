#include "GameObject.h"

int GameObject::count = 0; // initialise count to 0


GameObject::GameObject(const string & nameOfGameObject)
	:kName(nameOfGameObject)
{
	++count;  // add count for each  GameObject created
}

GameObject ::~GameObject()
{

}


int GameObject::getCount()
{
	return count;
}

string GameObject::getName(void)
{
	return kName;	
}



