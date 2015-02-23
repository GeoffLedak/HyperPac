#ifndef _H_SMACKIT_
#define _H_SMACKIT_

// Link to GDK libraries
#include "AGK.h"

#define DEVICE_WIDTH 448
#define DEVICE_HEIGHT 576
#define DEVICE_POS_X 32
#define DEVICE_POS_Y 32
#define FULLSCREEN false

// Global values for the app
class App
{
	public:

		// constructor
		App() { memset(this, 0, sizeof(App)); }

		// main app functions - mike to experiment with a derived class for this..
		void begin( void );
		void loop( void );
		void end( void );
};

extern App app;

#endif

// Allow us to use the LoadImage function name
#ifdef LoadImage
 #undef LoadImage
#endif