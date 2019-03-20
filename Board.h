#pragma once
class Board
{
public:
	Board();
	int p1_hit_brd;
	int p1_ship_brd;
	int p2_hit_brd;
	int p2_ship_brd;

	void setup();

	~Board();
};

