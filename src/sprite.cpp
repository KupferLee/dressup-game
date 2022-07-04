#include "sprite.h"

void sprite::draw()
{
	switch (current_item)
	{
	case 1:
		DrawTexture(this->texture_1, 0, 0, WHITE);
		break;

	case 2:
		DrawTexture(this->texture_2, 0, 0, WHITE);
		break;

	case 3:
		DrawTexture(this->texture_3, 0, 0, WHITE);
		break;
	}
}

void sprite::update()
{
	if (IsKeyPressed(KEY_D) && this->current_item < this->total_items)
	{
		this->current_item++;
	}
	else if (IsKeyPressed(KEY_D) && this->current_item >= this->total_items)
	{
		this->current_item = 1;
	}

	if (IsKeyPressed(KEY_A) && this->current_item != 1)
	{
		this->current_item--;
	}
	else if (IsKeyPressed(KEY_A) && this->current_item <= 1)
	{
		this->current_item = this->total_items;
	}
}

void sprite::unload_texture()
{
	UnloadTexture(this->texture_1);
	UnloadTexture(this->texture_2);
	UnloadTexture(this->texture_3);
}
