#include <iostream>
#include "Room.h"
#include "Flat.h"
#include "Wallpapers.h"
using namespace std;

int main()
{
	cout << "- THE PRICE OF WALLPAPERS -" << endl << endl;

	const int numberOfWallpapers = 5;
	Wallpapers allWalls[numberOfWallpapers] = {
		{"Wallperoni Deluxe", 0.53, 10.0, 250.0},
		{"Sad Beige Vibes", 0.7, 12.0, 320.0},
		{"Grandma's Couch 4K", 0.87, 15.9, 280.0},
		{"Emo Brick Pattern", 0.93, 13.6, 409.0},
		{"Default Windows 95 Dreams", 0.6, 14.0, 800.0}
	};

	int numberOfRooms;
	cout << "Desired number of rooms: ";
	cin >> numberOfRooms;
	cin.ignore(1000, '\n');
	while (numberOfRooms <= 0)
	{
		cout << "Only possitive values are allowed! Number of rooms: ";
		cin >> numberOfRooms;
		cin.ignore(1000, '\n');
	}

	Room* allRooms = new Room[numberOfRooms];
	int realnumberOfRooms = 0;
	int choice1 = allRooms[0].RoomCheck();
	while (choice1 == 1 && realnumberOfRooms < numberOfRooms)
	{
		allRooms[realnumberOfRooms].EnterRoomsValues();
		realnumberOfRooms++;
		choice1 = allRooms[realnumberOfRooms - 1].RoomCheck();
	}
	cout << "Input complete!" << endl << endl;
	numberOfRooms = realnumberOfRooms;
	cout << "- ROOMS' PARAMETERS -" << endl;
	cout << "Actual number of rooms: " << numberOfRooms << endl;
	for (int i = 0; i < numberOfRooms; i++)
	{
		cout << "Room #" << i + 1 << " " << allRooms[i].GetRooms() << endl;
		allRooms[i].PrintRoomsValues();
	}

	cout << "- WALLPAPERS' PARAMETERS -" << endl;
}