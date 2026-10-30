#include "Game.h"
#include <raylib.h>
namespace flappyBird
{

	void checkCollision(Player& player, Pipe& pipe)
	{
		if (player.posX + player.width >= (pipe.posX) && player.posX <= (pipe.posX + pipe.width))
		{
			if (player.posY + player.height >= (pipe.posY) && player.posY <= (pipe.posY + pipe.height))
			{
				/*	pipe = initPipe();
					player.isDead = true;*/
				/*initGame(player, pipe);*/
			}
		}
	}

	void checkCollision(Player& player, Obstacle obstacles[MAX_OBSTACLES])
	{
		for (int i = 0; i < MAX_OBSTACLES; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				checkCollision(player, obstacles[i].pipes[j]);
			}
		}
	}

	void initGame(Player& player, Obstacle obstacles[MAX_OBSTACLES])
	{
		player = initPlayer();


		for (int i = 0; i < MAX_OBSTACLES; i++)
		{
			obstacles[i] = createObstacles(i);
		}
	}

	void playGame()
	{
		Player player;
		Obstacle obstacles[MAX_OBSTACLES];


		InitWindow(1024, 768, "Floppy:El Pajaro que Vuela Remaster Editon");
		initGame(player, obstacles);
		while (!WindowShouldClose())
		{
			movePlayer(player);
			moveObstacles(obstacles);
			checkCollision(player, obstacles);
			checkIfObstacleLevedScreen(obstacles);


			BeginDrawing();
			ClearBackground(BLACK);
			drawObstacles(obstacles);
			drawPlayer(player);
			DrawText("v0.1", 20, 20, 30, WHITE);
			EndDrawing();
		}
	}

	void checkIfObstacleLevedScreen(Obstacle& obstacle)
	{
			if (obstacle.pipes[0].posX + obstacle.pipes[0].width < 0)
			{

				float newPosX = obstacle.pipes[0].posX + (MAX_OBSTACLES * OBSTACLE_SPACING);
				obstacle.pipes[0] = initPipe(newPosX);
				obstacle.pipes[1] = initPipe(newPosX, obstacle.pipes[0].height);
			}
	}
	void checkIfObstacleLevedScreen(Obstacle obstacles[MAX_OBSTACLES])
	{
		for (int i = 0; i < MAX_OBSTACLES; i++)
		{

			checkIfObstacleLevedScreen(obstacles[i]);
			
		}
	}
}