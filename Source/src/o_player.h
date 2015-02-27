#ifndef __O_PLAYER__
#define __O_PLAYER__

enum Direction { d_up, d_down, d_left, d_right, d_idle };

typedef struct {

	unsigned int sprite;
	Direction direction;
	short x;
	short y;

} player_t;

extern player_t playerOne;

void PlayerInitialize(player_t&);
void PlayerReset(player_t&);

#endif