#include "TitleScreen.h"





void TitleScreen::initialize() {

	credits = "HyperPac version ";
	credits.append("VERSION");
}


void TitleScreen::showTitleScreen() {

	agk::Print( getCredits() );

}


const char* TitleScreen::getCredits() {

	return credits.c_str();
}