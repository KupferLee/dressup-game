#include "sprite.h"

class animation : public sprite
{
protected:
	int frameCount = 0;
	int frameOffSet = 0;

public:
	animation();
	void drawPro();
};