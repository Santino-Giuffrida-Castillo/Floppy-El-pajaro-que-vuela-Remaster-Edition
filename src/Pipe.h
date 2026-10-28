#pragma once

namespace flappyBird
{
	const int NUMB_OF_PIPES = 2;
	const int MAX_PIPES = 30;
	const int PIPE_SPAWN_OFFSET = 40;
	const float PIPE_VEL = 100;

	struct Pipe
	{
		float posX;
		float posY;
		float width;
		float height;

	};
	Pipe initPipe();

	void movePipe(Pipe& pipe);

	void drawPipe(Pipe pipe);
}