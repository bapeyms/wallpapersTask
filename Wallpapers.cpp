#include "Wallpapers.h"
#include "Room.h"
#include "Flat.h"
#include <iostream>
using namespace std;

Wallpapers::Wallpapers() : wallpapersName(nullptr), wallpapersLength(0.0), wallpapersWidth(0.0), price(0.0) {}
Wallpapers::Wallpapers(): 
Wallpapers::Wallpapers(char* wallName, double wallLength, double wallWidth, double pr)
{
	wallpapersName = wallName;
	wallpapersLength = wallLength;
	wallpapersWidth = wallWidth;
	price = pr;
}
Wallpapers::~Wallpapers()
{
	delete[] wallpapersName;
}

