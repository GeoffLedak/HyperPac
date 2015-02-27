#include "template.h"
#include "main.h"


void M_Begin() {

	MASTER_CLOCK = 0;
	timerRemaining = false;

	agk::SetVirtualResolution(224, 288);
	agk::SetViewOffset(16, 16);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);

	gameState = TITLE_SCREEN;

	PlayerInitialize(playerOne);
	PlayerReset(playerOne);

	credits = "";
	credits = credits + "HyperPac version " + "VERSION";
	instructions = "Press Space Bar to begin";

}


void M_Loop() {

	agk::Print(MASTER_CLOCK);

	switch (gameState) {

	case TITLE_SCREEN:
		agk::Print("TITLE SCREEN");
		GS_TitleScreen();

		// If user presses the Space Bar, start the round
		if (agk::GetButtonPressed(1) == 1) {
			gameState = STARTING_ROUND;
		}
		break;

	case STARTING_ROUND:
		agk::Print("player.x:");
		agk::Print(playerOne.x);
		agk::Print("STARTING ROUND");
		GS_StartingRound();
		break;

	case PLAY:
		agk::Print("PLAY");
		agk::Print(playerOne.x);
		agk::Print(playerOne.y);
		GS_Play();
		break;

	case PAUSE:
		agk::Print("PAUSE");
		agk::Print("PAUSE");
		break;

	default:
		agk::Print("Error, not a valid game state");
	}

}


void M_End() {


}


