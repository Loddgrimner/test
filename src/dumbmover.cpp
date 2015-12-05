#include "dumbmover.h"
#include <stdlib.h>
#include <ncurses.h>

dumbmover::dumbmover()
{
	delta.setx(rand()%10-5);
	delta.sety(rand()%10-5);

	position.setx(30);
	position.sety(100);

	speed = rand() % 50 + 1;
	movepoints = 0;
}

dumbmover::~dumbmover()
{
}

void dumbmover::update()
{
	if(movepath.getsize() == 0)
	{
		movepath.calculate(position, position + delta);
		movepath.pop_front();
	}

	if(movepath.getsize() != 0)
	{
		movepoints += speed;
		if(movepoints > 100)
		{
			movepoints -= 100;
			position = movepath.getcurrent();
			movepath.pop_front();
		}
	}
	mvprintw(this->position.getx(),this->position.gety(),"@");
	movepath.draw();
}
