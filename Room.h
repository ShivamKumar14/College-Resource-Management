#pragma once
#include<iostream>
#include<string>
using namespace std;
class Room
{
public:
	string roomType;
	string roomID;
	int capacity;
public:
	static int roomcount;
	Room();
	Room(string rt,string id,int c);
    void displayInfo();
	~Room();
};
