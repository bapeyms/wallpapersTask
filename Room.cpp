#include "Room.h"
#include "Flat.h"
#include "Wallpapers.h"
#include <iostream>
using namespace std;

Room::Room() :roomName(nullptr), roomHeight(0.0), roomWidth(0.0), roomLength(0.0), ceiling(0) {}
Room::~Room()
{
	delete[] roomName;
}

int Room::RoomCheck()
{
	int choice;
	cout << endl;
	cout << "Would you like to enter a room's parameters? (yes - 1, no - 0): ";
	cin >> choice;
	cin.ignore(1000, '\n');
	while (choice != 1 && choice != 0)
	{
		cout << "Enter only 1 or 0! Enter a value: ";
		cin >> choice;
		cin.ignore(1000, '\n');
	}
	return choice;
}
void Room::EnterRoomsValues()
{
	const int N = 256;
	char data[N];

	if (roomName != nullptr)
	{
		delete[] roomName;
	}
	cout << "Room name: ";
	cin.getline(data, N);
	roomName = new char[strlen(data) + 1];
	strcpy_s(roomName, strlen(data) + 1, data);

	cout << "Room height (m): ";
	cin >> roomHeight;

	cout << "Room width (m): ";
	cin >> roomWidth;

	cout << "Room length (m): ";
	cin >> roomLength;
	cin.ignore(1000, '\n');

	cout << "Wallpapering the ceiling (yes - 1, no - 0): ";
	cin >> ceiling;
	while (ceiling != 1 && ceiling != 0)
	{
		cout << "Enter only 1 or 0! Enter a value: ";
		cin >> ceiling;
	}
	cin.ignore(1000, '\n');
}
void Room::PrintRoomsValues()
{
	cout << "Height: " << roomHeight << " m" << endl;
	cout << "Width: " << roomWidth << " m" << endl;
	cout << "Length: " << roomLength << " m" << endl;
	cout << "Wallpapers ceiling (yes - 1, no - 0): " << ceiling << endl << endl;
}
char* Room::GetRooms()
{
	return roomName;
}

