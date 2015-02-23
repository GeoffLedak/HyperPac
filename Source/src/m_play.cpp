#include "Main.h"

using namespace std;


void Main::play() {

	p_readKeys();
	updateSprites();

}


void Main::p_readKeys() {

	//TURN RIGHT    
	if ( agk::GetRawKeyState( 39 ) )
		setDirectionPlayerOne( d_right );

	//TURN LEFT    
	if ( agk::GetRawKeyState( 37 ) )
		setDirectionPlayerOne(d_left);

	//TURN DOWN    
	if (agk::GetRawKeyState(40))
		setDirectionPlayerOne(d_down);

	//TURN UP    
	if (agk::GetRawKeyState(38))
		setDirectionPlayerOne(d_up);
	

}


void Main::updateSprites() {

	updatePlayerOne();

	agk::SetSpritePosition( playerOne.sprite, playerOne.x, playerOne.y );

}


void Main::updatePlayerOne() {

	if (playerOne.direction == d_right)
		playerOne.x ++;

	if (playerOne.direction == d_left)
		playerOne.x --;

	if (playerOne.direction == d_down)
		playerOne.y ++;

	if (playerOne.direction == d_up)
		playerOne.y --;

}


void Main::setDirectionPlayerOne( Direction d_direction ) {

	playerOne.direction = d_direction;

	if (d_direction == d_right) {
		agk::SetSpriteFlip(playerOne.sprite, 0, 0);
		agk::SetSpriteAngle(playerOne.sprite, 0);
	}

	if (d_direction == d_left) {
		agk::SetSpriteFlip(playerOne.sprite, 1, 0);
		agk::SetSpriteAngle(playerOne.sprite, 0);
	}

	if (d_direction == d_down) {
		agk::SetSpriteFlip(playerOne.sprite, 0, 0);
		agk::SetSpriteAngle(playerOne.sprite, 90);
	}

	if (d_direction == d_up) {
		agk::SetSpriteFlip(playerOne.sprite, 0, 0);
		agk::SetSpriteAngle(playerOne.sprite, 270);
	}

}