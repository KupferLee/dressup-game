#include "user_interface.h"

user_interface::user_interface()
{
	this->current_item = 1;
	this->total_items = 2;

	this->texture_1 = LoadTexture("assets/graphics/UI/arrows_hair.png");
	this->texture_2 = LoadTexture("assets/graphics/UI/arrows_top.png");
	this->texture_3 = LoadTexture("assets/graphics/UI/arrows_pants.png");
	this->texture_4 = LoadTexture("assets/graphics/UI/arrows_shoes.png");
}