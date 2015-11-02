#pragma once

#include <ncurses.h>

#include "visitor.h"

class listvisitor: public visitor
{
public:
	listvisitor ();
	void visit(gameobject* e);

private:
	int numberdrawn;
};
