#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <string>
using namespace std;

class GameObject
{
public:
	GameObject();
	~GameObject();
	string getName(void);
	static int getCount();
protected:
	GameObject(const string &);
     const string kName;
private:
	  static int count;
};



#endif