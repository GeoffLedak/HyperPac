#include "Main.h"


void Main::begin() {

	agk::SetVirtualResolution(224, 288);
	agk::SetViewOffset(16, 16);
	agk::SetSyncRate(60, 0);
	agk::SetScissor(0, 0, 0, 0);

	playerOne.initialize();
	playerOne.reset();

}


void Main::loop() {

}


void Main::end() {

}