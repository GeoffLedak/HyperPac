#include "template.h"
#include "gs_startinground.h"



void GS_StartingRound() {

	agk::Print("STARTING DA ROUND YO");

	if ( stateDuration(180) )
		gameState = PLAY;

}