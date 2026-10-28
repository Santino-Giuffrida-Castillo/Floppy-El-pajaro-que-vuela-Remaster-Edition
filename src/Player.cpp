#include "Player.h"

#include <raylib.h>


Player initPlayer()
{
	Player player;
	player.posX = 100;
	player.posY = 200;
	player.velY = PLAYER_SPEED;
	player.width = 40;
	player.height = 40;
	player.isDead = false;
	return player;
}
void movePlayer(Player& player)
{
	if (IsKeyDown(KEY_UP))
	{
		player.posY -= player.velY * GetFrameTime();
	}
	else if (IsKeyDown(KEY_DOWN))
	{
		player.posY += player.velY * GetFrameTime();
	}

	if (player.posY + player.height > GetScreenHeight())
	{
		player.posY = static_cast<float>(GetScreenHeight()) - player.height;
	}
	else if (player.posY < 0)
	{
		player.posY = 0;
	}
}
void drawPlayer(Player player)
{
	DrawRectangle(static_cast<int>(player.posX), static_cast<int>(player.posY), static_cast<int>(player.width), static_cast<int>(player.height), BLUE);
}