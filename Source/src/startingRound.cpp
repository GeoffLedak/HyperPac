#include "Main.h"


void Main::startingRound() {

	agk::Print("STARTING DA ROUND YO");

	if ( stateDuration(180) )
		gameState = PLAY;

}