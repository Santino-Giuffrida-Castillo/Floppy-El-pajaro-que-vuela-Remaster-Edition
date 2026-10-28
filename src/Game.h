#pragma once
#include "Player.h"
#include "Pipe.h"

void checkCollision(Player& player, Pipe& pipe);
void initGame(Player& player, Pipe& pipe);
void playGame(Player& player, Pipe& pipe);
