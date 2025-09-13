#pragma once
class Wallpapers
{
	char* wallpapersName;
	double wallpapersLength;
	double wallpapersWidth;
	double price;
public:
	Wallpapers();
	Wallpapers(char* wallName, double wallLength, double wallWidth, double pr);
	~Wallpapers();
};

