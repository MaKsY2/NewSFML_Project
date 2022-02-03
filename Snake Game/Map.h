#ifndef MAP_H
#define MAP_H

#include <vector>

#include "Object.h"

class Map
{
public:
	Map(int height, int weight);
	virtual ~Map();
	void setObject(Object* obj, std::pair<int, int> newCoord);
private:
	std::vector<std::vector<Object*>> mField;
};



#endif // !MAP_H
