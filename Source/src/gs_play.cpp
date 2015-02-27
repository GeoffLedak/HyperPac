#include "gs_play.h"

using namespace std;


void GS_Play() {

	Play_ReadKeys();
	Play_UpdateSprites();

}


void Play_ReadKeys() {
	//TURN RIGHT    
	if ( agk::GetRawKeyState( 39 ) )
		Play_SetDirection( playerOne, d_right );

	//TURN LEFT    
	if ( agk::GetRawKeyState( 37 ) )
		Play_SetDirection( playerOne, d_left );

	//TURN DOWN    
	if (agk::GetRawKeyState(40))
		Play_SetDirection( playerOne, d_down );

	//TURN UP    
	if (agk::GetRawKeyState(38))
		Play_SetDirection(playerOne, d_up );
}


void Play_UpdateSprites() {

	Play_MovePlayer(playerOne);

}


void Play_MovePlayer(player_t &player) {

	if (player.direction == d_right)
		player.x++;

	if (player.direction == d_left)
		player.x--;

	if (player.direction == d_down)
		player.y++;

	if (player.direction == d_up)
		player.y--;

	agk::SetSpritePosition(player.sprite, player.x, player.y);
}


void Play_SetDirection( player_t &player, Direction d_direction ) {

	player.direction = d_direction;

	if (d_direction == d_right) {
		agk::SetSpriteFlip(player.sprite, 0, 0);
		agk::SetSpriteAngle(player.sprite, 0);
	}

	if (d_direction == d_left) {
		agk::SetSpriteFlip(player.sprite, 1, 0);
		agk::SetSpriteAngle(player.sprite, 0);
	}

	if (d_direction == d_down) {
		agk::SetSpriteFlip(player.sprite, 0, 0);
		agk::SetSpriteAngle(player.sprite, 90);
	}

	if (d_direction == d_up) {
		agk::SetSpriteFlip(player.sprite, 0, 0);
		agk::SetSpriteAngle(player.sprite, 270);
	}

}