#include "Pipe.h"

#include <iostream>

#include <raylib.h>

Pipe initPipe()
{
	Pipe pipe;
	pipe.posX = GetScreenWidth() + PIPE_SPAWN_OFFSET;
	pipe.poxY = (rand() % ((GetScreenHeight() / 2) + (GetScreenHeight() / 4)));
	pipe.high = GetScreenHeight() - pipe.poxY;
	pipe.width = 30;
}

void movePipe(Pipe& pipe)
{
	pipe.posX += PIPE_VEL * GetFrameTime();
}