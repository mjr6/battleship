#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;


//Boat.h stores all the variables and functions for use in Boat.cpp
class boat
{
public:

	int size;
	int team;
	string type;
	int coord[][2];
	//int location[][2];
	boat();
	boat(int s, int te, string ty);
	void printBoat(int x);
	int placeBoat(int loc, int dir);

	~boat();

};
