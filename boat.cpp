#include "Boat.h"
using namespace std;
//Declaring what printBoat() will do in the objects


boat::boat()
{
}

boat::boat(int s, int te, string ty)
{
	size = s;
	team = te;
	type = ty; 
	for (int x = 0; x < size; x++) {
		coord[x][0] = 0;
		coord[x][1] = 0;
	}
}

void boat::printBoat(int x) {
	cout << "BOAT SIZE: " << size << " TEAM: " << team << "at " << endl;
}

int boat::placeBoat(int loc, int dir)
{
	return 0;
}


boat::~boat() {
}
