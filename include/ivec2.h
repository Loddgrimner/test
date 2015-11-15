#pragma once

class ivec2
{
public:
	ivec2 ();
	ivec2 (int x, int y);
	
	void setx(int x);
	void sety(int y);
	void set(ivec2 v);
	int getx();
	int gety();
	
	bool operator==(ivec2 other);
	bool operator!=(ivec2 other);
	ivec2 operator+(ivec2 other);
	ivec2 operator-(ivec2 other);

private:
	int x;
	int y;
};
