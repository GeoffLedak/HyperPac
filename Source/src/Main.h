#include "Player.h"
#include "template.h"
#include <string>

using namespace std;


class Main {

public:

	// TIMING
	unsigned short MASTER_CLOCK;
	bool timerRemaining;
	bool stateDuration(short time);

	// DRAWING & MOVEMENT
	void updateSprites();
	void updatePlayerOne();
	void setDirectionPlayerOne( Direction );

	// MASTER STATES
	void begin();
	void loop();
	void end();

	// GAME STATES
	void titleScreen();
		void showTitleScreen();
		const char* getCredits();
		const char* getInstructions();

	void startingRound();

	void play();
		void p_readKeys();

	// STUFF
	string credits;
	string instructions;

	Player playerOne;
	Player playerTwo;

	enum GameState { TITLE_SCREEN, STARTING_ROUND, PLAY, PAUSE };
	GameState gameState;

};