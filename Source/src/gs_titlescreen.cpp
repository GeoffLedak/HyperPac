#include "template.h"
#include "gs_titlescreen.h"


void GS_TitleScreen() {

	agk::Print(Title_GetCredits());
	agk::Print(Title_GetInstructions());

}


const char* Title_GetCredits() {

	return credits.c_str();
}


const char* Title_GetInstructions() {

	return instructions.c_str();
}