#pragma once
#include "physicscomponent.h"
#include "ivec2.h"
#include "path.h"

class dumbmover : public physicscomponent
{
public:
	dumbmover ();
	~dumbmover ();
	void update();

private:
	ivec2 position;
	ivec2 delta;
	path movepath;
	int speed;
	int movepoints;
};
