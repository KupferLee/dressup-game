#include "hair.h"

hair::hair()
{
	this->current_item = 1;
	this->total_items = 3;

	this->texture_1 = LoadTexture("assets/graphics/hair/hair_1.png");
	this->texture_2 = LoadTexture("assets/graphics/hair/hair_2.png");
	this->texture_3 = LoadTexture("assets/graphics/hair/hair_3.png");
}