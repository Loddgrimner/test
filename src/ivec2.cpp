#include "ivec2.h"

ivec2::ivec2()
{
	this->x = 0;
	this->y = 0;
}

ivec2::ivec2(int x, int y)
{
	this->x = x;
	this->y = y;
}

void ivec2::setx(int x)
{
	this->x = x;
}

void ivec2::sety(int y)
{
	this->y = y;
}

void ivec2::set(ivec2 v)
{
	this->x = v.getx();
	this->y = v.gety();
}

int ivec2::getx()
{
	return this->x;
}

int ivec2::gety()
{
	return this->y;
}

bool ivec2::operator==(ivec2 other)
{
	if(
		this->getx() == other.getx()
		&&
		this->gety() == other.gety()
	)
	{
		return true;
	}
	return false;
}

bool ivec2::operator!=(ivec2 other)
{
	return !(*this == other);
}
