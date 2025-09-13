#include "Wallpapers.h"
#include "Room.h"
#include "Flat.h"
#include <iostream>
using namespace std;

Wallpapers::Wallpapers();
Wallpapers::Wallpapers(char* wallName, double wallLength, double wallWidth, double pr)
{
	wallpapersName = wallName;
	wallpapersLength = wallLength;
	wallpapersWidth = wallWidth;
	price = pr;
}
Wallpapers::Wallpapers(const char* wallName, double wallLength, double wallWidth, double pr)
{
}
Wallpapers::~Wallpapers()
{
	delete[] wallpapersName;
}

