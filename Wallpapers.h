#pragma once
class Wallpapers
{
	const char* wallpapersName;
	double wallpapersLength;
	double wallpapersWidth;
	double price;
public:
	Wallpapers(const char* wallName, double wallLength, double wallWidth, double pr);
	Wallpapers();
	~Wallpapers();
};

