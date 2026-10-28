#pragma once
#include "Player.h"
#include "Pipe.h"
namespace flappyBird
{
	void checkCollision(Player& player, Pipe& pipe);
	void initGame(Player& player, Pipe& pipe);
	void playGame();
	void checkIfPipeLevedScreen(Pipe& pipe);
}
