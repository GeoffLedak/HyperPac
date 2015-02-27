#include "main.h"
#include "gs_startinground.h"
#include "i_timing.h"
#include "s_functions.h"


void GS_StartingRound()
{
	agk::Print(MASTER_CLOCK);
	agk::Print("Round beginning...");

	if (StateDuration(180)) {

		S_SpritesVisable(true);
		gameState = PLAY;
	}

}


