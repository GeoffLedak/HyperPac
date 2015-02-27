#ifndef __GS_TITLESCREEN__
#define __GS_TITLESCREEN__

#include <string>

using namespace std;

void GS_TitleScreen();

const char* Title_GetCredits();
const char* Title_GetInstructions();

extern string credits;
extern string instructions;

#endif