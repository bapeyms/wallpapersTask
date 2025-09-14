#include <iostream>
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
	int choice1 = allRooms[0].RoomCheck();
	while (choice1 == 1 && realnumberOfRooms < numberOfRooms)
	{
		allRooms[realnumberOfRooms].EnterRoomsValues();
		realnumberOfRooms++;
		choice1 = allRooms[realnumberOfRooms - 1].RoomCheck();
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
}