//Including required libraries
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;															//Used for ease of writing

//Function and variable definitions
void displayscreen();
void placeship();
void shipcheck(int size, int left, int top, int char1);
char shipname[11];													
int x, intcolumn, introw, inttop, intleft;
char playerboard[10][10] =														//46 used due to it's ASCII value
{
	{ 46,46,46,46,46,46,46,46,46,46 },	
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
	{ 46,46,46,46,46,46,46,46,46,46 },
};

//Main program shell
int main()																		//Main program
{
	/*HANDLE hStdout;
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdout, FOREGROUND_BLUE | BACKGROUND_RED);
	cout << "Welcome to BATTLESHIP..." << endl;
	SetConsoleTextAttribute(hStdout, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);*/
	placeship();
	displayscreen();
	cin.ignore();
	cin.get();

	return 0;
}


void placeship()											//Function to place ship co-ordinates
{
	//THIS BIT WILL HAVE TO BE ALTERED FOR CLASSES
	for (x = 5; x >= 1; x--)								
	{
		switch (x)
		{
		case 5:
			strcpy_s(shipname, "Carrier");
			break;
		case 4:
			strcpy_s(shipname, "Battleship");
			break;
		case 3:
			strcpy_s(shipname, "Kruiser");
			break;
		case 2:
			strcpy_s(shipname, "Destroyer");
			break;

		case 1:
			strcpy_s(shipname, "Submarine");
			break;
		}
		do
		{
			cout << "Plot one end of the " << shipname << "." << '\n';
			cout << "Please put the left side coordinate, then the top..." << '\n';
			//WILL CHANGE WITH NEW CO-ORIDNATE SYSTEM, WILL TAKE IN STRING FOR INTLEFT
			cin >> intleft;																								//Take in co-ordinate
			cin >> inttop;
		} while (intleft < 0 || intleft>9 || inttop < 0 || inttop>9 || (playerboard[intleft][inttop] != 46));
		playerboard[intleft][inttop] = int(shipname[0]);																	//Replace empty co-ordinate with ship letter
		displayscreen();																								//Send board to console
		shipcheck(x, intleft, inttop, (int(shipname[0])));																//Choose ship orientation and check boundary conditions														
	}
}

//Function to choose orientation of ship and check boundary limits
void shipcheck(int size, int left, int top, int char1)
{
	int choice, loop;
	cout << "What orientation would you like your ship to be? Enter the correct numeric value. " << '\n' << "1: UP   2:DOWN   3:RIGHT   4:LEFT" << '\n';
	cin >> choice;
	cout << size;

	switch (choice)																						//Switch statement for orientation of ship
	{
	case 1:																								//If user wants to place upwards
		for (loop = 1; loop < size; loop++)																//Looping for size-1
		{
			if (playerboard[left - loop][top] != 46 || int(left - (size - 1)) < (0))						//First statement checks for ships in position, second checks the boundary limits
			{
				playerboard[left][top] = 46;																//Set the co-ordinate given to blank
				cout << "The ship cannot be placed in this manner." << endl;							//Tell the user this is an invalid placement
				x = x + 1;																				//Add one to counter
				break;																					//breaks back to main
			}
			if (int(left - (size - 1)) >= (0) && x == size)												//If the placing is valid
			{
				for (loop = 1; loop < size; loop++)														//For the length of the ship
				{
					playerboard[left - loop][top] = char1;												//Place ship on board
				}
				displayscreen();																		//Send the board to console
			}
		}
		break;																							//Breaks back to main

	case 2:																								//If user wants to place downwards
		for (loop = 1; loop < size; loop++)																//Looping for size-1
		{
			if (playerboard[left + loop][top] != 46 || int(left - (size - 1)) >(9))						//First statement checks for ships in position, second checks the boundary limits
			{
				playerboard[left][top] = 46;																//Set the co-ordinate given to blank
				cout << "The ship cannot be placed in this manner." << endl;							//Tell the user this is an invalid placement
				x = x + 1;																				//Add one to counter
				break;																					//breaks back to main
			}
			if (int(left - (size - 1)) <= (9) && x == size)												//If the placing is valid
			{
				for (loop = 1; loop < size; loop++)														//For the length of the ship
				{
					playerboard[left + loop][top] = char1;												//Place ship on board
				}
				displayscreen();																		//Send the board to console
			}
		}
		break;																							//breaks back to main

	case 3:																								//If user wants to place to the right
		for (loop = 1; loop < size; loop++)																//Looping for size-1
		{
			if (playerboard[left][top + loop] != 46 || int(left - (size - 1)) >(9))						//First statement checks for ships in position, second checks the boundary limits
			{
				playerboard[left][top] = 46;																//Set the co-ordinate given to blank
				cout << "The ship cannot be placed in this manner." << endl;							//Tell the user this is an invalid placement
				x = x + 1;																				//Add one to counter
				break;																					//breaks back to main
			}
			if (int(top + (size - 1)) <= (9) && x == size)												//If the placing is valid
			{
				for (loop = 1; loop < size; loop++)														//For the length of the ship
				{
					playerboard[left][top + loop] = char1;												//Place ship on board
				}
				displayscreen();																		//Send the board to console
			}
		}
		break;																							//Breaks back to main

	case 4:																								//If user wants to place to the right
		for (loop = 1; loop < size; loop++)																//Looping for size-1
		{
			if (playerboard[left][top - loop] != 46 || int(top - (size - 1)) < (0))						//First statement checks for ships in position, second checks the boundary limits
			{
				playerboard[left][top] = 46;																//Set the co-ordinate given to blank
				cout << "The ship cannot be placed in this manner." << endl;							//Tell the user this is an invalid placement
				x = x + 1;																				//Add one to counter
				break;																					//breaks back to main
			}
			if (int(top - (size - 1)) >= (0) && x == size)												//If the placing is valid
			{
				for (loop = 1; loop < size; loop++)														//For the length of the ship
				{
					playerboard[left][top - loop] = char1;												//Place ship on board
				}
				displayscreen();																		//Send the board to console
			}
		}
		break;																							//Break back to main
	}
}

//Function to send the current board state to the console
void displayscreen()
{
	//setup outline of board
	introw = 0;
	intcolumn = 0;
	cout << "" << endl;
	cout << "  Your Board" << endl;
	cout << "======================" << endl;
	cout << " |0|1|2|3|4|5|6|7|8|9|";
	cout << '\n';
	cout << introw << "|";
	do
	{
		if (introw == 9 && intcolumn == 10)																//If the board is complete
		{
			break;																						//Break to main
		}
		if (intcolumn > 9 && introw < 9)																//If at the end of a row (excluding last row)
		{
			cout << "|" << endl;																		//insert boundary
			introw = introw + 1;																		//Begin next row
			cout << (introw) << "|";																	//insert boundary
			intcolumn = 0;																				//Start of next column
		}
		if (introw < 10)																				//If less than 10 rows
		{
			if (intcolumn < 9)																			//If there is one or more columns to be filled
			{
				cout << playerboard[introw][intcolumn] << " ";											//fill column and then add a space after
			}
			if (intcolumn > 8)																			
			{
				cout << playerboard[introw][intcolumn];													//fill column, doesn't add a space after			
			}
		}
		intcolumn = intcolumn + 1;																		//add one to column counter
	} while (introw < 10);																				//perform above algorithm while there is less than 10 rows
	//reset row and column values and finish setup of board
	introw = 0;	
	intcolumn = 0;
	cout << "|" << endl;
	cout << "======================" << endl;
	cout << "" << endl;
}
