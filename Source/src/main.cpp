#include "main.h"

using namespace std;
Main main;


void Main::begin(void) 
{
	MASTER_CLOCK = 0;
	timerRemaining = false;

	agk::SetVirtualResolution(224, 288);
	agk::SetViewOffset(16, 16);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);

	gameState = TITLE_SCREEN;

	PlayerInitialize(playerOne);
	PlayerReset(playerOne);


}


void Main::loop(void)
{
	switch (gameState) {

		case TITLE_SCREEN:
			GS_TitleScreen();

			// If user presses the Space Bar, start the round
			if (agk::GetButtonPressed(1) == 1) {
				gameState = STARTING_ROUND;
			}
			break;

		case STARTING_ROUND:
			GS_StartingRound();
			break;

		case PLAY:
			agk::PrintC("playerOne x: "); agk::Print(playerOne.x);
			agk::PrintC("playerOne y: "); agk::Print(playerOne.y);
			GS_Play();
			break;

		case PAUSE:
			agk::Print("PAUSE");
			break;

		default:
			agk::Print("Error, not a valid game state");
		}


	agk::Sync();
}


void Main::end(void)
{

}

