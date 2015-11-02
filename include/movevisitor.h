#pragma once

#include <stdlib.h>

#include "visitor.h"

class movevisitor: public visitor
{
public:
	movevisitor ();
	void visit(gameobject* e);

private:
	/* data */
};
