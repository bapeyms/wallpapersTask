#include <iostream>
#include <cmath>
#include "Room.h"
#include "Flat.h"
#include "Wallpapers.h"
using namespace std;

int main()
{
	cout << "- THE PRICE OF WALLPAPERS -" << endl << endl;

	// статичний масив використаний через те, що для користувачів каталог із доступних шпалер
	// виглядає вказаним за замовчуванням, тобто він не може редагуватися
	cout << "- WALLPAPER CATALOG -" << endl;
	const int numberOfWallpapers = 5;
	Wallpapers allWallpapers[5] = {
		Wallpapers("Velora Mist", 10.5, 53.0, 28.0),
		Wallpapers("Eclipse Bloom", 10.5, 70.0, 42.0),
		Wallpapers("Aurora Veil", 10.5, 53.0, 35.0),
		Wallpapers("Lunar Tides", 10.5, 106.0, 55.0),
		Wallpapers("Seraphine Drift", 10.5, 53.0, 31.0)
	};
	for (int i = 0; i < numberOfWallpapers; i++)
	{
		cout << "Wallpaper #" << i + 1 << ": " << allWallpapers[i].GetWallpapersName() << endl;
		allWallpapers[i].PrintWallpapers();
	}

	int numberOfRooms;
	cout << "Desired number of rooms: ";
	cin >> numberOfRooms;
	cin.ignore(1000, '\n');
	while (numberOfRooms <= 0)
	{
		cout << "Only possitive values are allowed! Number of rooms: ";
		cin >> numberOfRooms;
		cin.ignore(1000, '\n');
	}

	Room* allRooms = new Room[numberOfRooms];
	int realnumberOfRooms = 0;
	int choice1 = 1;
	while (choice1 == 1 && realnumberOfRooms < numberOfRooms)
	{
		if (realnumberOfRooms < numberOfRooms)
		{
			choice1 = allRooms[realnumberOfRooms].RoomCheck();
		}
		if (choice1 == 1 && realnumberOfRooms < numberOfRooms)
		{
			allRooms[realnumberOfRooms].EnterRoomsValues();
			realnumberOfRooms++;
		}
	}
	cout << "Input complete!" << endl << endl;
	numberOfRooms = realnumberOfRooms;
	cout << "- ROOMS' PARAMETERS -" << endl;
	cout << "Actual number of rooms: " << numberOfRooms << endl;
	for (int i = 0; i < numberOfRooms; i++)
	{
		cout << "Room #" << i + 1 << " " << allRooms[i].GetRooms() << endl;
		allRooms[i].PrintRoomsValues();
	}

	cout << "- WALLPAPERS' PARAMETERS -" << endl;
	int* chosenWallpapers = new int[numberOfRooms];
	for (int i = 0; i < numberOfRooms; i++)
	{
		cout << "Choose type of wallpapers for the " << allRooms[i].GetRooms() << " (from 1 to 5): ";
		int choice;
		cin >> choice;
		while (choice <= 0 || choice > numberOfWallpapers)
		{
			cout << "Invalid choice! Please choose a number from 1 to " << numberOfWallpapers << ": ";
			cin >> choice;
		}
		chosenWallpapers[i] = choice - 1;
	}
	cout << "Input complete!" << endl << endl;

	cout << "- CALCULATION RESULTS -" << endl;
	double totalCost = 0.0;
	int* rollsPerWallpaperType = new int[numberOfWallpapers] {0};
	for (int i = 0; i < numberOfRooms; i++)
	{
		double roomArea = allRooms[i].Area();
		int wallpaperIndex = chosenWallpapers[i];
		double wallpaperArea = allWallpapers[wallpaperIndex].WallpaperArea();

		int rollsNeeded = 0;
		if (wallpaperArea > 0)
		{
			rollsNeeded = static_cast<int>(ceil(roomArea / wallpaperArea));
		}

		cout << "For " << allRooms[i].GetRooms() << " with '" 
			<< allWallpapers[wallpaperIndex].GetWallpapersName() << "' "
			<< " wallpaper, " << rollsNeeded << " rolls are needed" << endl;

		rollsPerWallpaperType[wallpaperIndex] += rollsNeeded;
		totalCost += rollsNeeded * allWallpapers[wallpaperIndex].GetWallpapersPrice();
	}
	cout << endl;

	cout << "- SUMMARY -" << endl;
	for (int i = 0; i < numberOfWallpapers; i++)
	{
		if (rollsPerWallpaperType[i] > 0)
		{
			cout << "Total rolls needed for '" << allWallpapers[i].GetWallpapersName() << "': "
				<< rollsPerWallpaperType[i] << " pcs" << endl;
		}
	}
	cout << "Total cost: " << totalCost << " euro" << endl;
}