#include "game.h"
#include <stdlib.h>

game::game()
{
	for (int i = 0; i < 1000; ++i) {
		this->entities.push_back(entity());
	}
	//this->gameobjects.push_back(gameobject());
}

game::~game()
{
}

void game::update()
{
	for (auto& i : entities) {
		i.update();
	}

	/*movevisitor mv;

	for (auto& i : gameobjects) {
		i.accept(mv);
	}*/
}

void game::draw()
{
	for (auto& i : entities) {
		i.draw();
	}

	/*drawvisitor dw;
	for (auto& i : gameobjects) {
		i.accept(dw);
	}

	listvisitor lv;
	for (auto& i : gameobjects) {
		i.accept(lv);
	}*/
}
