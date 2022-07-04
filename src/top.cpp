#include "top.h"

top::top()
{
	this->current_item = 1;
	this->total_items = 2;

	this->texture_1 = LoadTexture("assets/graphics/tops/top_1.png");
	this->texture_2 = LoadTexture("assets/graphics/tops/top_2.png");
}