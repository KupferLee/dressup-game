#include "pants.h"

pants::pants()
{
	this->current_item = 1;
	this->total_items = 2;

	this->texture_1 = LoadTexture("assets/graphics/pants/pants_1.png");
	this->texture_2 = LoadTexture("assets/graphics/pants/pants_2.png");
}