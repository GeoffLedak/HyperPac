#ifndef __O_PLAYER__
#define __O_PLAYER__

typedef struct {

	unsigned int sprite;
	Direction direction;
	short x;
	short y;

} player_t;

extern player_t playerOne;
void PlayerInitialize(player_t);
void PlayerReset(player_t);

#endif