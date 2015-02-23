// Includes
#include "Main.h"

// Namespace
using namespace std;

App app;
Main main;

void App::begin(void)
{
	main.begin();
}

void App::loop (void)
{
	main.loop();
	agk::Sync();
}


void App::end (void)
{
	main.end();
}
