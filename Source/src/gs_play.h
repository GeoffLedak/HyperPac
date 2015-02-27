#ifndef __GS_PLAY__
#define __GS_PLAY__

#include "template.h"
#include "o_player.h"


void GS_Play();
void Play_ReadKeys();
void Play_UpdateSprites();
void Play_SetDirection(player_t, Direction);
void Play_MovePlayer(player_t);


#endif