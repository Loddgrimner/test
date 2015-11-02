#pragma once

#include "gameobject.h"

class visitor
{
public:
	virtual void visit(gameobject* e) = 0;
};
