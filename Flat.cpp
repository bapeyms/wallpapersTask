#include "Flat.h"
#include "Wallpapers.h"
#include "Room.h"
#include <iostream>
using namespace std;

Flat::Flat() :roomList(nullptr) {}
Flat::~Flat()
{
	delete[] roomList;
}


