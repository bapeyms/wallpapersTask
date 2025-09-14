#pragma once
class Room
{
	char* roomName;
	double roomHeight, roomWidth, roomLength;
	bool ceiling;
public:
	Room();
	~Room();

	double RoomArea();
	double CeilingArea();
	double Area();

	int RoomCheck();
	void EnterRoomsValues();
	void PrintRoomsValues();
	char* GetRooms();
};

