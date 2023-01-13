#include "Member.h"

Member::Member()
{
	memberID = "  ";

	name = " ";

	password = "  ";

	membershipType = " ";

	phoneNo = "  ";

	email= "  ";



}
Member::Member(string id, string n, string pas, string t, string ph, string em)
{
	memberID = id;

	name = n;

	password = pas;

	membershipType = t;

	phoneNo = ph;

	email= em;
}
void Member::displayInfo()
{
	cout << "ID:" << memberID<<endl;
	cout << "Name:" << name << endl;
	cout << "MembershipType:" << membershipType << endl;
	cout << "Phone No:" << phoneNo << endl;
	cout << "Email:" << email << endl;

}

Member::~Member()
{
	
}
