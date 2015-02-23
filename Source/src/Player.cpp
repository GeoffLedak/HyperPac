#include "Player.h"
#include "template.h"


void Player::initialize() {

	sprite = agk::LoadSprite( "Graphics/player_frames.png" );
	agk::SetSpriteAnimation(sprite, 16, 16, 4);
	agk::PlaySprite(sprite, 22);

}


void Player::reset() {

	x = 128;
	y = 224;
	agk::SetSpritePosition(sprite, x, y);

}