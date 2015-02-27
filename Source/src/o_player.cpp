#include "main.h"
#include "o_player.h"
#include "s_functions.h"

player_t playerOne;

void PlayerInitialize(player_t& player) {

	player.sprite = agk::LoadSprite( "Graphics/player_frames.png" );
	S_SpritesVisable(false);
	agk::SetSpriteAnimation(player.sprite, 16, 16, 4);
	agk::PlaySprite(player.sprite, 22);

	player.direction = d_right;

}


void PlayerReset(player_t& player) {

	player.x = 128;
	player.y = 224;
	agk::SetSpritePosition(player.sprite, player.x, player.y);

}