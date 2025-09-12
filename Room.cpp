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

