// Includes
#include "template.h"
#include "main.h"

// Namespace
using namespace std;

App app;


void App::begin(void)
{
	M_Begin();
}

void App::loop (void)
{
	M_Loop();
	agk::Sync();
}


void App::end (void)
{
	M_End();
}

