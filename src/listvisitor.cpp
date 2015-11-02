
#include "listvisitor.h"

listvisitor::listvisitor()
{
	numberdrawn = 0;
}

void listvisitor::visit(gameobject* e)
{
	mvprintw(1+1*numberdrawn,2,"ID:%i, xpos:%i, ypos:%i", numberdrawn, e->getx(), e->gety());
	++numberdrawn;
}
