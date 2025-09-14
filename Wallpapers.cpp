#include "Wallpapers.h"
#include "Room.h"
#include "Flat.h"
#include <iostream>
#include <cstring>
using namespace std;

Wallpapers::Wallpapers() :wallpapersName(nullptr), wallpapersLength(0.0), wallpapersWidth(0.0), price(0.0) {}
Wallpapers::Wallpapers(const char* wallName, double lenght, double width, double pr)
{
	wallpapersName = new char[strlen(wallName) + 1];
	strcpy_s(wallpapersName, strlen(wallName) + 1, wallName);

	wallpapersLength = lenght;
	wallpapersWidth = width;
	price = pr;

}

void Wallpapers::PrintWallpapers()
{
	cout << "Length: " << wallpapersLength << " m" << endl;
	cout << "Weigth: " << wallpapersWidth << " m" << endl;
	cout << "Price: " << price << " euro" << endl << endl;
}

const char* Wallpapers::GetWallpapersName()
{
	return wallpapersName;
}

Wallpapers::~Wallpapers()
{
	delete[] wallpapersName;
}
