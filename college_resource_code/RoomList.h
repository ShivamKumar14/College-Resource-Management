#pragma once
#include"Room.h"
#include <iostream>
using namespace std;

struct Noder
{
	Room data;
	Noder* next;
	Noder* prev;
};

class RoomList
{
	Noder*head;
	Noder*tail;
public:
	RoomList();
	void insert(string rt,string id,int c);
	void displayFromHead();
	void displayFromTail();
	void deleteInBetween(string val);
	void edit(string rt, string id, int c);
	~RoomList();

};


