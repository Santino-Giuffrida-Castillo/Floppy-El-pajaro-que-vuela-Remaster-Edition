#pragma once


const int NUMB_OF_PIPES = 2;
const int MAX_PIPES = 30;
const int PIPE_SPAWN_OFFSET = 40;
const int PIPE_VEL = 20;

struct Pipe
{
	float posX;
	float poxY;
	float width;
	float high;

};
Pipe initPipe();

void movePipe(Pipe& pipe);