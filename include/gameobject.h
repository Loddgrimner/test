#pragma once

#include "ivec2.h"

class visitor;

class gameobject
{
public:
	gameobject ();
	virtual void accept(visitor &v);
	int getx();
	int gety();
	void setx(int x);
	void sety(int y);
	ivec2 getposition();
	ivec2 getdestination();
	void setposition(ivec2 v);
	void setdestination(ivec2 v);

private:
	ivec2 position;
	ivec2 destination;
};
