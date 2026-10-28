#include "Player.h"

#include <raylib.h>


Player initPlayer()
{
	Player player;
	player.posX = 100;
	player.posY = 200;
	player.velY = 0;
	player.width = 40;
	player.height = GetScreenHeight() - player.posY;
	player.isDead = false;
}