#include "Main.h"


void Main::begin() {

	MASTER_CLOCK = 0;
	timerRemaining = false;

	agk::SetVirtualResolution(224, 288);
	agk::SetViewOffset(16, 16);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);

	gameState = TITLE_SCREEN;

	playerOne.initialize();
	playerOne.reset();

	credits = "";
	credits = credits + "HyperPac version " + "VERSION";
	instructions = "Press Space Bar to begin";

}


void Main::loop() {
	agk::Print( MASTER_CLOCK );

	switch ( gameState ) {

		case TITLE_SCREEN:
			showTitleScreen();

			// If user presses the Space Bar, start the round
			if (agk::GetButtonPressed(1) == 1) {
				gameState = STARTING_ROUND;		
			}
			break;

		case STARTING_ROUND:
			startingRound();
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


bool Main::stateDuration(short time) {

	if ( timerRemaining == false && MASTER_CLOCK <= 0 )
			timerRemaining = true;

	if (timerRemaining == true)
		MASTER_CLOCK++;

	if (MASTER_CLOCK > time) {
		MASTER_CLOCK = 0;
		timerRemaining = false;
	}

	if (timerRemaining == false)
		return true;
	else
		return false;
}
