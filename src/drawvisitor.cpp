#include "drawvisitor.h"

drawvisitor::drawvisitor()
{
}

void drawvisitor::visit(gameobject* e)
{
	mvprintw(e->getx(),e->gety(),"╬");
}
