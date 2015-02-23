#include "Player.h"
#include "template.h"
#include <string>

using namespace std;


class Main {

public:

	unsigned short MASTER_CLOCK;
	bool timerRemaining;
	bool stateDuration(short time);
	void readKeys();
	void updateSprites();
	void updatePlayerOne();
	void setDirectionPlayerOne( Direction );

	void begin();
	void loop();
	void end();

	// GAME STATES
	void titleScreen();
	void startingRound();
	void play();


	void showTitleScreen();
	const char* getCredits();
	const char* getInstructions();

	string credits;
	string instructions;

	Player playerOne;
	Player playerTwo;

	enum GameState { TITLE_SCREEN, STARTING_ROUND, PLAY, PAUSE };
	GameState gameState;

};