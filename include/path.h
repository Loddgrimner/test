#pragma once

#include <vector>
#include "ivec2.h"

class path
{
public:
	path();
	void calculate(ivec2 start, ivec2 end);
	ivec2 getnext();

private:
	void plot(int x, int y);
	std::vector<ivec2> waypoints;
};
