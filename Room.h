#pragma once
class Room
{
	char* roomName;
	double roomHeight, roomWidth, roomLength;
	int ceiling;
public:
	Room();
	~Room();

	int RoomCheck();
	void EnterRoomsValues();
	void PrintRoomsValues();
	char* GetRooms();
};

