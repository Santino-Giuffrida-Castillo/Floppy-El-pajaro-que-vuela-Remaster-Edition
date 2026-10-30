#pragma once
#include "Player.h"
#include "Pipe.h"
namespace flappyBird
{
	void checkCollision(Player& player, Pipe& pipe);
	void checkCollision(Player& player, Obstacle obstacles[MAX_OBSTACLES]);
	void initGame(Player& player, Obstacle obstacles[MAX_OBSTACLES]);
	void playGame();
	void checkIfObstacleLevedScreen(Obstacle& obstacles);
	void checkIfObstacleLevedScreen(Obstacle obstacles[MAX_OBSTACLES]);
	void checkIfPlayerDied(Player& player, Obstacle obstacles[MAX_OBSTACLES]);
	
}
