#include "body.h"

body::body()
{
	this->current_item = 1;
	this->total_items = 3;
	this->texture_1 = LoadTexture("assets/graphics/body/body_1.png");
	this->texture_2 = LoadTexture("assets/graphics/body/body_2.png");
	this->texture_3 = LoadTexture("assets/graphics/body/body_3.png");
}

/*
void body::draw()
{
	DrawTexture(this->texture_1, 0, 0, WHITE);
}

void body::unloadTexture()
{
	UnloadTexture(this->texture_1);
}
*/