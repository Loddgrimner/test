#include "entity.h"
#include "dumbmover.h"
#include <vector>

class entitybuilder
{
public:
	entitybuilder();
	~entitybuilder();

	void buildbullet(ivec2 start, ivec2 delta);
private:
	std::vector<entity> assembled;
};
