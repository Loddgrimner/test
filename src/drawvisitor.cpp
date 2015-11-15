#include <ncurses.h>
#include "drawvisitor.h"

drawvisitor::drawvisitor()
{
}

void drawvisitor::visit(gameobject* e)
{
	e->getpath().draw();
	mvprintw(e->getx(),e->gety(),"╬");
}
