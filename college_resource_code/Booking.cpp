#include"Booking.h"
Booking::Booking()
{
	memberID=" ";
	date=" ";
	timeStart=" ";
	timeEnd=" ";
	roomID=" ";
	organizer=" ";
	NoOFparticipants=0;

}
Booking::Booking(string m,string d,string ts,string te,string r,string o,int p)
{
	memberID = m;

	date = d;

	timeStart = ts;

	timeEnd = te;

	roomID = r;

	organizer = o;

	NoOFparticipants=p;
	count++;
}
Booking::Booking(Booking &obj)
{
		
	memberID = obj.memberID;

	date = obj.date;

	timeStart = obj.timeStart;

	timeEnd = obj.timeEnd;

	roomID = obj.roomID;

	organizer = obj.organizer;

	NoOFparticipants=obj.NoOFparticipants;
}

void Booking::showBookingInfo()
{
	cout << "Memeber ID: " << memberID<<endl;
	cout << "Date: " << date <<endl;
	cout << "Time Start:" << timeStart <<endl;
	cout << "Time End: " << timeEnd <<endl;
	cout << "Room ID: " << roomID <<endl;
	cout << "Organizer: " << organizer <<endl;
	cout << "No of Participants: " << NoOFparticipants <<endl;
}
void Booking::showInfoTomember()
{
	cout << "Booked on: " << date << endl;
	cout << "Memeber ID: " << memberID << endl;
	cout << "Time Start:" << timeStart << endl;
	cout << "Time End: " << timeEnd << endl;
	cout << "Room ID: " << roomID << endl;
	cout << "Organizer: " << organizer << endl;
	cout << "No of Participants: " << NoOFparticipants << endl;

}
Booking::~Booking()
{
	
}