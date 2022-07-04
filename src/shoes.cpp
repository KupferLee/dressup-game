#include "shoes.h"

shoes::shoes()
{
	this->current_item = 1;
	this->total_items = 3;

	this->texture_1 = LoadTexture("assets/graphics/shoes/shoes_1.png");
	this->texture_2 = LoadTexture("assets/graphics/shoes/shoes_2.png");
	this->texture_3 = LoadTexture("assets/graphics/shoes/shoes_3.png");
}