#include "Player.h"

#include <raylib.h>


Player initPlayer()
{
	Player player;
	player.posX = 100;
	player.posY = 200;
	player.velY = PLAYER_SPEED;
	player.width = 40;
	player.height = GetScreenHeight() - player.posY;
	player.isDead = false;

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
}
void drawPlayer(Player player)
{
	DrawRectangle(player.posX, player.posY, player.width, player.height, BLUE);
}