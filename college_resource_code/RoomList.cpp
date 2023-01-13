#include "RoomList.h"


RoomList::RoomList()
{
	head = nullptr;
	tail = nullptr;
}

void RoomList::insert(string rt,string id,int c)
{
	Room rooms(rt,id,c);
	Noder *newNoder;
	newNoder = new Noder;
	newNoder->next = nullptr;
	newNoder->prev = nullptr;
	newNoder->data = rooms;

	if (head == nullptr)
	{
		head = newNoder;
		tail = newNoder;
	}
	else
	{
		tail->next = newNoder;
		newNoder->prev = tail;
		tail = newNoder;
	}
}

void RoomList::displayFromHead()
{
	Noder *temp = head;
	if (head == nullptr)
	{
		cout << "NO rooms To show.." << endl;
	}
	else{

		while (true)
		{
			temp->data.displayInfo();
			temp = temp->next;

			if (temp == nullptr)
				break;

		}
	}
}

void RoomList::displayFromTail()
{
	Noder *temp = tail;
	if (head == nullptr)
	{
		cout << "NO room To show.." << endl;
	}
	else{
		while (true)
		{
			temp->data.displayInfo();
			temp = temp->prev;

			if (temp == nullptr)
				break;

		}
	}
}
void RoomList::edit(string rt, string id, int c)
{
	Noder* temp = tail;
	while (true)
	{
		if (temp->data.roomID == id)
		{

			temp->data.roomType= rt;
			temp->data.capacity = c;
			break;
		}

		else
		{
			temp = temp->prev;
		}
	}
}
void RoomList::deleteInBetween(string val)
{
	Noder *temp = tail;
	Noder *temp1 = head;
	if (head == nullptr)
	{
		cout << "NO room To delete.." << endl;
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
			if (temp->data.roomID == val)
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

RoomList::~RoomList()
{


}