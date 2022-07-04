#pragma once
#include "raylib.h"

class sprite
{
public:

	Texture2D texture_1;
	Texture2D texture_2;
	Texture2D texture_3;
	Texture2D texture_4;

	int current_item;
	int total_items;

	virtual void draw();
	virtual void update();
	virtual void unload_texture();

};