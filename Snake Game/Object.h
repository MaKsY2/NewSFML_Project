#ifndef OBJECT_H
#define OBJECT_H

enum ObjectType
{
	FOOD,
	VOID,
	WALL
};

class Object
{
public:
	Object(ObjectType aType);
	virtual ~Object();

private:
	ObjectType mType;
};



#endif // !OBJECT_H
