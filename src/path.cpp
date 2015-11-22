#include <cstdlib>
#include <ncurses.h>
#include "path.h"

path::path()
{
}

int path::getsize()
{
	return this->waypoints.size();
}

ivec2 path::getcurrent()
{
	if(this->getsize() >= 1)
	{
		return this->waypoints[0];
	}
	return ivec2(0,0);
}

void path::pop_front()
{
	if(this->getsize() >= 1)
	{
		this->waypoints.pop_front();
	}
}

void path::draw()
{
	for (auto i : this->waypoints) {
		mvprintw(i.getx(),i.gety(),"+");
	}
}

ivec2 path::getnext()
{
	if(this->waypoints.size() >= 2)
	{
		this->waypoints.pop_front();
		return this->waypoints[0];
	}
	return ivec2(0,0);
}

void path::plot(int x, int y)
{
	this->waypoints.push_back(ivec2(x,y));
}

void path::calculate(ivec2 start, ivec2 end)
{
	this->waypoints.clear();

	int x1 = start.getx();
	int y1 = start.gety();
	int x2 = end.getx();
	int y2 = end.gety();

	int delta_x(x2 - x1);
	// if x1 == x2, then it does not matter what we set here
	signed char const ix((delta_x > 0) - (delta_x < 0));
	delta_x = std::abs(delta_x) << 1;

	int delta_y(y2 - y1);
	// if y1 == y2, then it does not matter what we set here
	signed char const iy((delta_y > 0) - (delta_y < 0));
	delta_y = std::abs(delta_y) << 1;

	this->plot(x1, y1);

	if (delta_x >= delta_y)
	{
		// error may go below zero
		int error(delta_y - (delta_x >> 1));

		while (x1 != x2)
		{
			if ((error >= 0) && (error || (ix > 0)))
			{
				error -= delta_x;
				y1 += iy;
			}
			// else do nothing

			error += delta_y;
			x1 += ix;

			this->plot(x1, y1);
		}
	}
	else
	{
		// error may go below zero
		int error(delta_x - (delta_y >> 1));

		while (y1 != y2)
		{
			if ((error >= 0) && (error || (iy > 0)))
			{
				error -= delta_y;
				x1 += ix;
			}
			// else do nothing

			error += delta_x;
			y1 += iy;

			this->plot(x1, y1);
		}
	}

}
