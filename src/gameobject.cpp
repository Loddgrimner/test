#include "gameobject.h"
#include "visitor.h"

gameobject::gameobject()
{
	this->position.setx(10);
	this->position.sety(10);
	this->destination.setx(10);
	this->destination.sety(10);
}

void gameobject::accept(visitor &v)
{
	v.visit(this);
}

int gameobject::getx()
{
	return this->position.getx();
}

int gameobject::gety()
{
	return this->position.gety();
}

void gameobject::setx(int x)
{
	this->position.setx(x);
}

void gameobject::sety(int y)
{
	this->position.sety(y);
}

ivec2 gameobject::getposition()
{
	return this->position;
}

void gameobject::setposition(ivec2 v)
{
	this->position.set(v);
}

ivec2 gameobject::getdestination()
{
	return this->destination;
}

void gameobject::setdestination(ivec2 v)
{
	this->destination.set(v);
}
