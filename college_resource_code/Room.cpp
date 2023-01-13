#include "Room.h"

Room::Room()
{
	roomType=" ";
	roomID=" ";
	capacity=0;

}
Room::Room(string rt,string id,int c)
{
	
	roomType = rt;

	roomID = id;

	capacity=c;
	roomcount++;
}
void Room::displayInfo()
{
	cout << "Room ID: " << roomID<<endl;
	cout << "Room Type: " << roomType << endl;
	cout << "Capacity: " << capacity << endl;
}

Room::~Room()
{
	
}
