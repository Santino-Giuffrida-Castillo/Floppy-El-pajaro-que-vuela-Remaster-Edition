#pragma once
struct Player
{
	float posX;
	float posY;
	float width;
	float height;
	float velY;
	bool isDead;
};

Player initPlayer();