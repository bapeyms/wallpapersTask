#pragma once
class Wallpapers
{
	char* wallpapersName;
	double wallpapersLength;
	double wallpapersWidth;
	double price;
public:
	Wallpapers();
	Wallpapers(const char* wallName, double lenght, double width, double pr);
	~Wallpapers();

	double WallpaperArea();
	double NumberOfRolls(double roomArea);
	void PrintWallpapers();
	const char* GetWallpapersName();
	double GetWallpapersPrice();
};
