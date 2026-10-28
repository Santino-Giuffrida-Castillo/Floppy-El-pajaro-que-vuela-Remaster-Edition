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
				initGame(player, pipe);
			}
		}
	}

	void initGame(Player& player, Pipe& pipe)
	{
		player = initPlayer();
		pipe = initPipe();
	}

	void playGame()
	{
		Player player;
		Pipe pipe;
		InitWindow(1024, 768, "Floppy:El Pajaro que Vuela Remaster Editon");
		initGame(player, pipe);
		while (!WindowShouldClose())
		{
			movePlayer(player);
			movePipe(pipe);
			checkCollision(player, pipe);
			checkIfPipeLevedScreen(pipe);


			BeginDrawing();
			ClearBackground(BLACK);
			drawPipe(pipe);
			drawPlayer(player);
			DrawText("v0.1", 20, 20, 30, WHITE);
			EndDrawing();
		}
	}

	void checkIfPipeLevedScreen(Pipe& pipe)
	{
		if ((pipe.posX + pipe.width) < 0)
		{
			pipe = initPipe();
		}
	}
}