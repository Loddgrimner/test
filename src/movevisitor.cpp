#include <stdlib.h>
#include "movevisitor.h"

movevisitor::movevisitor()
{
}

void movevisitor::visit(gameobject* e)
{
	e->setx(e->getx()+rand()%3-1);
	e->sety(e->gety()+rand()%3-1);
}
