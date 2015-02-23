#include "Main.h"


void Main::showTitleScreen() {

	agk::Print(getCredits());
	agk::Print(getInstructions());

}


const char* Main::getCredits() {

	return credits.c_str();
}


const char* Main::getInstructions() {

	return instructions.c_str();
}