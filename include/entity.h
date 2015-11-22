#pragma once
#include "physicscomponent.h"
#include "graphicscomponent.h"

class entity
{
public:
	entity();
	~entity();
	void update();	
	void draw();
private:
	graphicscomponent* graphics;
	physicscomponent* physics;
};
