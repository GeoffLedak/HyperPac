#include "template.h"
#include "gs_startinground.h"
#include "i_timing.h"


void GS_StartingRound() {

	agk::Print("STARTING DA ROUND YO");

	if ( StateDuration(180) )
		gameState = PLAY;


}