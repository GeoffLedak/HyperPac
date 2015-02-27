#ifndef _H_SMACKIT_
#define _H_SMACKIT_

#include "AGK.h"
#include "i_gamestate.h"
#include "gs_titlescreen.h"
#include "gs_startinground.h"
#include "gs_play.h"

#define DEVICE_WIDTH 448
#define DEVICE_HEIGHT 576
#define DEVICE_POS_X 32
#define DEVICE_POS_Y 32
#define FULLSCREEN false


class Main
{
	public:
		Main() { memset(this, 0, sizeof(Main)); }
		void begin( void );
		void loop( void );
		void end( void );
};

extern Main main;

#endif


#ifdef LoadImage
 #undef LoadImage
#endif