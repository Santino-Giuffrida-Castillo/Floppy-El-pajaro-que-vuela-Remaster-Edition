#include "Player.h"

#include <iostream>

#include <raylib.h>

namespace flappyBird
{
	const float gravity = 800.0f;
	Player initPlayer()
	{
		Player player;
		player.posX = 100;
		player.posY = 200;
		player.velY = PLAYER_SPEED;
		player.width = 40;
		player.height = 40;
		player.jumpForce = 300.0f;
		player.verticalVel = 0.0f;
		player.isDead = false;
		return player;
	}
	void movePlayer(Player& player)
	{
		float aux;
		if (IsKeyPressed(KEY_SPACE))
		{ 
			if (player.verticalVel < -player.jumpForce)
			{
				player.verticalVel = -player.jumpForce;
			}
			player.verticalVel -= player.jumpForce;

		}
		else
		{
			
			if (player.verticalVel > 350)
			{
				player.verticalVel = 350;
			}
			
			player.verticalVel += gravity * GetFrameTime();
			player.posY += (player.verticalVel) * GetFrameTime();
			aux = player.verticalVel;
			std::cout << player.verticalVel << std::endl;
		}

	
	


		if (player.posY < 0)
		{
			player.posY = 0;
		}
	}
	void drawPlayer(Player player)
	{
		DrawRectangle(static_cast<int>(player.posX), static_cast<int>(player.posY), static_cast<int>(player.width), static_cast<int>(player.height), BLUE);
	}
}