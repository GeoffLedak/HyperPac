#include "main.h"
#include "gs_titlescreen.h"


string credits;
string version;
string instructions;


void GS_TitleScreen() {

	credits = "";
	version = "0.01";
	credits = credits + "HyperPac by Geoff Ledak\nVersion " + version;
	instructions = "Press Space Bar to begin";

	agk::Print(Title_GetCredits());
	agk::Print("\n");
	agk::Print(Title_GetInstructions());

}


const char* Title_GetCredits() {

	return credits.c_str();
}


const char* Title_GetInstructions() {

	return instructions.c_str();
}