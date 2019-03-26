using namespace std;
#include<iostream>
#include"boat.h"

int attack(int coord[], int s, int *ship);
void hit_check();
int main() {

	const int size = 3;
	const int shipid = 1;
	int co[size][2]; // co becomes ship.location

	co[0][0] = 1;  
	co[0][1] = 2;
	co[1][0] = 1;
	co[1][1] = 3;
	co[2][0] = 1;
	co[2][1] = 4;
	int *ship = co[0];

	
	cout << *(ship + 0)<< *(ship+1) << '\n';
	cout << *(ship + 2) << *(ship + 3) << '\n';
	cout << *(ship + 4) << *(ship + 5) << '\n';
	int attack_coord[] = { 1, 4 };
	cout << "Enter coords";
	cin >> attack_coord[0]; cin >> attack_coord[1];
	 
	


	/* ship.location would give me  {(1, 2)(1, 3)(1, 4)} */
	
	//cout << attack_coord[1] << '\n';
	//int *a = attack_coord;


	//attack(attack_coord, size, ship);


	boat carrier1(3, 1, "carrier");
	cout << carrier1.size;




	cin.get();
	cin.get();
	cin.get();
	return 0;
}


int attack(int coord[], int size, int *ship) { 

	cout << ship;
	cout << &ship;


	//for (int x = 0; x < s; x++) {
	//	if (coord[0] == ) {};
	//}

	return 0;
}

//void hit_check(int attack_coord[]) { 
//
//	bool hit = false;
//	for (int x = 0; x < size; x++) {
//		if (attack_coord[0] == co[x][0] && attack_coord[1] == co[x][1]) {
//			cout << "You have hit: " << shipid << " at coordinate: " << co[x][0] << co[x][1] << '\n';
//			hit = true;
//			break;
//		}
//		else { cout << "you missed \n "; }
//	}
//}