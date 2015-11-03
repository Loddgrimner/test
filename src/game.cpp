#include "game.h"
#include "bresenham.h"
#include <stdlib.h>

game::game()
{
	this->gameobjects.push_back(gameobject());
	this->gameobjects.push_back(gameobject());
	this->gameobjects.push_back(gameobject());
}

game::~game()
{
}

void game::update()
{
	movevisitor mv;

	for (auto& i : gameobjects) {
		i.accept(mv);
	}
}

void game::draw()
{
	bresenham b;
	b.set(15,15,rand() % 30, rand() % 30);
	b.draw();

	drawvisitor dw;
	for (auto& i : gameobjects) {
		i.accept(dw);
	}

	listvisitor lv;
	for (auto& i : gameobjects) {
		i.accept(lv);
	}
}
