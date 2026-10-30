#include "ScreenManager.h"

#include <raylib.h>

#include "MainMenu.h"
#include "Credits.h"
#include "Game.h"


namespace flappyBird
{

	void showScreen()
	{
		InitWindow(1024, 768, "Floppy:El Pajaro que Vuela Remaster Editon");
		Screen actualScreen = Screen::MAIN_MENU;
		Player player;
		bool inGame = true;
		Obstacle obstacles[MAX_OBSTACLES];

		initGame(player, obstacles);

		while (!WindowShouldClose() && inGame)
		{
			BeginDrawing();
			if (actualScreen == Screen::MAIN_MENU)
			{
				ClearBackground(BLACK);
				showMainMenu(actualScreen);
			}
			else if (actualScreen == Screen::PLAY)
			{

				playGame(player, obstacles, actualScreen);
			}
			
			else if (actualScreen == Screen::CREDITS)
			{
				ClearBackground(BLACK);
				showCredits(actualScreen);
			}
			else if (actualScreen == Screen::EXIT)
			{
				inGame = false;
			}
		
			EndDrawing();
		}


		CloseWindow();
	}
}