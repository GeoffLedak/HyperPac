#include "Main.h"


void Main::begin() {

	agk::SetVirtualResolution(224, 288);
	agk::SetViewOffset(16, 16);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);

	gameState = TITLE_SCREEN;

	titleScreen.initialize();

	playerOne.initialize();
	playerOne.reset();

}


void Main::loop() {

	switch (gameState) {

		case TITLE_SCREEN:
			agk::Print("TITLE SCREEN");
			titleScreen.showTitleScreen();

			break;

		case STARTING_ROUND:
			agk::Print("STARTING ROUND");
			break;

		case PLAY:
			agk::Print("PLAY");
			break;

		case PAUSE:
			agk::Print("PAUSE");
			break;

		default:
			agk::Print("Error, not a valid game state");

	}

}


void Main::end() {

}