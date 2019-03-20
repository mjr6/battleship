#include "Board.h"



Board::Board()
{

}



void Board::setup()
{
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			p1_hit_brd[x][y] = 0;
		}
	}
}
Board::~Board()
{
}
