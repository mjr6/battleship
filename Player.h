#pragma once
class Player
{
public:
	Player();
	int id;  //identifies player as 1 or 2
	int ships_left;  //if this reaches 0 the other player wins
	int moves_left;  // each player has 50 turns if this reaches 0 the game is a tie

	void makePlayer();
	~Player();
};

