#pragma once

class visitor;

class gameobject
{
public:
	gameobject ();
	virtual void accept(visitor &v);
	int getx();
	int gety();
	void setx(int x);
	void sety(int y);

private:
	int x;
	int y;
};
