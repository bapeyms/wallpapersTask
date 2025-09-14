#pragma once
class Room;

class Flat
{
	Room* roomList;
	int roomCount;
public:
	Flat();
	Flat(Room* allRooms, int count);
	int RoomCheck();
	void PrintFlat(int numberOfRooms);
	~Flat();
};

