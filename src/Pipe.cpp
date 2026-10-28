#include "Pipe.h"

#include <iostream>

#include <raylib.h>
namespace flappyBird
{
	Pipe initPipe()
	{
		int screenHeight = GetScreenHeight();
		int minHeight = screenHeight / 4;
		int maxHeight = screenHeight / 2 + (screenHeight / 8);
		Pipe pipe;
		pipe.posX = static_cast<float>(GetScreenWidth() + PIPE_SPAWN_OFFSET);
		pipe.height = static_cast<float>(minHeight + (rand() % (maxHeight - minHeight)));
		pipe.posY = static_cast<float>(screenHeight) - pipe.height;
		pipe.width = 30;

		return pipe;
	}

	void movePipe(Pipe& pipe)
	{
		pipe.posX -= (PIPE_VEL)*GetFrameTime();
	}

	void drawPipe(Pipe pipe)
	{
		DrawRectangle(static_cast<int>(pipe.posX), static_cast<int>(pipe.posY), static_cast<int>(pipe.width), static_cast<int>(pipe.height), RED);
	}
}