#pragma once
namespace flappyBird
{
	const float PLAYER_SPEED = 100;
	struct Player
	{
		float posX;
		float posY;
		float width;
		float height;
		float velY;
		float jumpForce;
		float verticalVel;
		bool isDead;
	};

	Player initPlayer();
	void movePlayer(Player& player);
	void drawPlayer(Player player);
}