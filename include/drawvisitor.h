#pragma once

#include "visitor.h"

class drawvisitor: public visitor
{
public:
	drawvisitor ();
	void visit(gameobject* e);

private:
	/* data */
};
