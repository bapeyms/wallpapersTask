#include "Flat.h"
#include "Wallpapers.h"
#include "Room.h"
#include <iostream>
using namespace std;

Flat::Flat() :roomList(nullptr) {}
Flat::Flat(Room* allRooms, int count)
{
    roomCount = count;
    roomList = new Room[count];
    for (int i = 0; i < count; i++)
    {
        roomList[i] = allRooms[i];
    }
}
void Flat::PrintFlat(int numberOfRooms)
{
    for (int i = 0; i < numberOfRooms; i++)
    {
        cout << "Room #" << i + 1 << " " << roomList[i].GetRooms() << endl;
        roomList[i].PrintRoomsValues();
    }
}

Flat::~Flat()
{
	delete[] roomList;
}


