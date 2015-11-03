#pragma once

class bresenham
{
public:
	bresenham();

	void draw();
	void set(int x1s, int y1s, int x2s, int y2s);
	void plot(int x, int y);

private:
	int x1;
	int x2;
	int y1;
	int y2;
};
