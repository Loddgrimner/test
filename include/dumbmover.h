#pragma once
#include "physicscomponent.h"
#include "ivec2.h"
#include "path.h"

class dumbmover
{
public:
	dumbmover ();
	void update();

private:
	ivec2 position;
	ivec2 delta;
	path movepath;
	int velocity;
	int movepoints;
};
