#include "Map.h"
#include "Object.h"

#include <vector>

#include "Food.h"
#include "Wall.h"
#include "Void.h"

Map::Map(int height, int weight):
	mField				(height,std::vector<Object*>(weight,NULL))
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weight; j++)
		{
			if (i == 0 || j == 0 || i == height - 1 || j == weight - 1)
			{
				setObject(new Wall(), std::make_pair(i, j));
			}
			else
			{
				setObject(new Void(), std::make_pair(i, j));
			}
		}
	}
}

Map::~Map()
{
}


void
Map::setObject(Object* obj, std::pair<int, int> newCoord)
{
	delete(mField[newCoord.first][newCoord.second]);
	mField[newCoord.first][newCoord.second] = obj;
}