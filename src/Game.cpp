#include "Game.h"

void checkCollision(Player& player, Pipe& pipe)
{
	if (player.posX + player.width >= (pipe.posX) && player.posX  <= (pipe.posX + pipe.width))
	{
		if (player.posY + player.height >= (pipe.posY) && player.posY <= (pipe.posY + pipe.height))
		{
			pipe = initPipe();
			player.isDead = true;
		}
	}
}
void initGame(Player& player, Pipe& pipe)
{
	player = initPlayer();
	pipe = initPipe();
}