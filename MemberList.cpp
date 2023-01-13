#include "MemberList.h"


MemberList::MemberList()
{
	head = nullptr;
	tail = nullptr;
}

void MemberList::insert(string id, string n, string pas, string t, string ph, string em)
{
	Member members(id,n,pas, t,ph,em);
	Nodem *newNodem;
	newNodem = new Nodem;
	newNodem->next = nullptr;
	newNodem->prev = nullptr;
	newNodem->data = members;

	if (head == nullptr)
	{
		head = newNodem;
		tail = newNodem;
	}
	else
	{
		tail->next = newNodem;
		newNodem->prev = tail;
		tail = newNodem;
	}
}

void MemberList::displayFromHead()
{
	Nodem *temp = head;
	if (head == nullptr)
	{
		cout << "NO member To show.." << endl;
	}
	else{
		while (true)
		{
			temp->data.displayInfo();
			cout << endl;
			temp = temp->next;

			if (temp == nullptr)
				break;

		}
	}
}

void MemberList::displayFromTail()
{
	Nodem *temp = tail;
	if (tail == nullptr)
	{
		cout << "NO member  To show.." << endl;
	}
	else{
		while (true)
		{
			temp->data.displayInfo();
			cout << endl;
			temp = temp->prev;

			if (temp == nullptr)
				break;
		}
	}
}
void MemberList::edit(string id, string n, string pas, string t, string ph, string em)
{
	Nodem* temp = tail;
	while (true)
	{
		if (temp->data.memberID == id)
		{

			temp->data.name = n;
			temp->data.password = pas;
			temp->data.membershipType = t;
			temp->data.phoneNo = ph;
			temp->data.email = em;
			break;
		}

		else
		{
			temp = temp->prev;
		}
	}
}
void MemberList::deleteInBetween(string val)
{
	Nodem *temp = tail;
	Nodem *temp1 = head;
	if (head == nullptr)
	{
		cout << "NO member To delete.." << endl;
	}
	else {
		while (true)
		{
			if (temp1->prev || temp1->next == nullptr)
			{
				temp1->prev->next = nullptr;

				delete temp1;
				break;
			}
			if (temp->prev || temp->next == nullptr)
			{
				temp->prev->next = nullptr;

				delete temp;
				break;
			}
			if (temp->data.memberID == val)
			{

				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				delete temp;
				break;
			}

			else
			{
				temp = temp->prev;
			}
		}
	}
}

MemberList::~MemberList()
{


}