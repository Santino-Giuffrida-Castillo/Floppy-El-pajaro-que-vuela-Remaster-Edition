#include "Pipe.h"

#include <iostream>

#include <raylib.h>

Pipe initPipe()
{
	Pipe pipe;
	pipe.posX = GetScreenWidth() + PIPE_SPAWN_OFFSET;
	pipe.posY = (rand() % ((GetScreenHeight() / 2) + (GetScreenHeight() / 4)));
	pipe.height = GetScreenHeight() - pipe.posY;
	pipe.width = 30;
}

void movePipe(Pipe& pipe)
{
	pipe.posX += PIPE_VEL * GetFrameTime();
}