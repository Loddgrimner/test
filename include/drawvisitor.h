#pragma once

#include <ncurses.h>

#include "visitor.h"

class drawvisitor: public visitor
{
public:
	drawvisitor ();
	void visit(gameobject* e);

private:
	/* data */
};
