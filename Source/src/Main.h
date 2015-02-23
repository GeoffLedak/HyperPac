#include "Player.h"
#include "template.h"
#include "TitleScreen.h"


class Main {

public:
	void begin();
	void loop();
	void end();

	Player playerOne;
	Player playerTwo;

	enum GameState { TITLE_SCREEN, STARTING_ROUND, PLAY, PAUSE };
	GameState gameState;

	TitleScreen titleScreen;

};