#include "animation.h"

animation::animation()
{
	this->texture_1 = LoadTexture("assets/graphics/animationTest.png");

	// frameCount will get increased every frame
	// 5 is every 5 frames new step
	// 3 for 3 sprites in spritesheet
	
}

void animation::drawPro()
{
	frameOffSet = (frameCount / 7 % 3);
	frameCount++;

	// rectangle resource = which part of the spritesheet gets drawn - frameOffset*32 = Schrittgröße für jeden Frame - 0 = Reihe im Spritesheet (mit *32 wegen Pixel)
	// 32 = horizontale Größe des Suchvierecks - 32 = vertikalte Größe des Suchvierecks
	// 
	// rectangle destination = where do i draw on the screen
	// x/y pos
	// größe des Objektes in vertikal und horizontal
	//
	// origin = leave it empty weil es erst bei rotation wichtig wird
	// rotation selbsterklärend
	// tint selbsterklärend
	DrawTexturePro(texture_1, { (float)frameOffSet * 32, 0, 32, 32 }, { 600, 100, 200, 200 }, {}, 0, WHITE);
}

