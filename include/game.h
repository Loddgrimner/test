#pragma once

#include <vector>
#include "drawvisitor.h"
#include "listvisitor.h"
#include "movevisitor.h"
#include "gameobject.h"

class game
{
public:
	game ();
	virtual ~game ();
	void update();
	void draw();

private:
	std::vector<gameobject> gameobjects;
};
