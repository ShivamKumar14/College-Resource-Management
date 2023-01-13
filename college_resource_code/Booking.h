#pragma once
#include<iostream>
#include<string>
using namespace std;
class Booking
{
public:
	string memberID;
	string date;
	string timeStart;
	string timeEnd;
	string roomID;
	string organizer;
	int NoOFparticipants;

public:
	static int count;
	Booking();
	Booking(string m,string d,string ts,string te,string r,string o,int p);
	Booking(Booking &obj);
    void showBookingInfo();
	void showInfoTomember();
	~Booking();
};

