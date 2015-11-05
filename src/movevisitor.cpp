#include <stdlib.h>
#include "movevisitor.h"
#include "path.h"

movevisitor::movevisitor()
{
}

void movevisitor::visit(gameobject* e)
{
	if(e->getdestination() == e->getposition())
	{
		e->setdestination(ivec2(rand() % 20, rand() % 20));
	}
	path p;

	p.calculate(e->getposition(), e->getdestination());

	e->setposition(p.getnext());
}
