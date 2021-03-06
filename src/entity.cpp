#include "entity.h"

//should use creational pattern instead
#include "dumbmover.h"


entity::entity()
{
	this->physics = new dumbmover();
}

entity::~entity()
{
	if(this->physics != nullptr)
	{
		//delete this->physics;
	}
}

void entity::update()
{
	this->physics->update();
}

void entity::draw()
{
	//this->graphics->draw();
}
