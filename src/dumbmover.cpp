#include "dumbmover.h"

dumbmover::dumbmover()
{
	delta.setx(5);
	delta.sety(8);

	position.setx(15);
	position.sety(15);
}

void dumbmover::update()
{
	if(movepath.getsize() == 0)
	{
		movepath.calculate(position, position + delta);
	}
	position = movepath.getcurrent();
}
