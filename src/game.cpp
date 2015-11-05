#include "game.h"
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
	drawvisitor dw;
	for (auto& i : gameobjects) {
		i.accept(dw);
	}

	listvisitor lv;
	for (auto& i : gameobjects) {
		i.accept(lv);
	}
}
