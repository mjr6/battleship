//Include
#include <iostream>			//iostream for input and outputs to the console
#include <string>			//string library to use strings
#include <vector>			//vectors are basically better arrays

//Using namespace for ease of code writing
using namespace std;

#include "Boat.h"


//This function sets up objects for every single boat piece on both teams
void boatSetup() {

	Boat Carrier1;
	Carrier1.size = 5;
	Carrier1.team = 1;

	Boat Carrier2;
	Carrier2.size = 5;
	Carrier2.team = 2;

	Boat Battleship1;
	Battleship1.size = 4;
	Battleship1.team = 1;

	Boat Battleship2;
	Battleship2.size = 4;
	Battleship2.team = 2;

	Boat Cruiser1;
	Cruiser1.size = 3;
	Cruiser1.team = 1;

	Boat Cruiser2;
	Cruiser2.size = 3;
	Cruiser2.team = 2;

	Boat Submarine1;
	Submarine1.size = 3;
	Submarine1.team = 1;

	Boat Submarine2;
	Submarine2.size = 3;
	Submarine2.team = 2;

	Boat Destroyer1;
	Destroyer1.size = 2;
	Destroyer1.team = 1;

	Boat Destroyer2;
	Destroyer2.size = 2;
	Destroyer2.team = 2;

	//testing everything has been set up correctly

	/*Carrier1.printBoat();
	Carrier2.printBoat();
	Battleship1.printBoat();
	Battleship2.printBoat();
	Cruiser1.printBoat();
	Cruiser2.printBoat();
	Submarine1.printBoat();
	Submarine2.printBoat();
	Destroyer1.printBoat();
	Destroyer2.printBoat();*/

	Carrier1.printBoat();
	Battleship1.printBoat();
	Cruiser1.printBoat();
	Submarine1.printBoat();
	Destroyer1.printBoat();

	Carrier2.printBoat();
	Battleship2.printBoat();
	Cruiser2.printBoat();
	Submarine2.printBoat();
	Destroyer2.printBoat(); 



}



//Main function
int main() {

	boatSetup();

	cin.ignore();
		cin.get();
		return 0;
}