#pragma once

#include <deque>
#include "ivec2.h"

class path
{
public:
	path();
	void calculate(ivec2 start, ivec2 end);
	ivec2 getnext();
	void draw();
	
	int getsize();
	ivec2 getcurrent();
	void pop_front();

private:
	void plot(int x, int y);
	std::deque<ivec2> waypoints;
};
