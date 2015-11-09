#include <stdlib.h>
#include "movevisitor.h"
#include "path.h"

movevisitor::movevisitor()
{
}

void movevisitor::visit(gameobject* e)
{
	e->move();
}
