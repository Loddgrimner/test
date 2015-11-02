#include "gameobject.h"
#include "visitor.h"

gameobject::gameobject()
{
	x = 10;
	y = 10;
}

void gameobject::accept(visitor &v)
{
	v.visit(this);
}

int gameobject::getx()
{
	return this->x;
}

int gameobject::gety()
{
	return this->y;
}

void gameobject::setx(int x)
{
	this->x = x;
}

void gameobject::sety(int y)
{
	this->y = y;
}
