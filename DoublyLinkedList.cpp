#include "DoublyLinkedList.h"


DoublyLinkedList::DoublyLinkedList()
{
	head = nullptr;
	tail = nullptr;
}

void DoublyLinkedList::insert(string m,string d,string ts,string te,string r,string o,int p)
{
	Booking book(m,d,ts,te,r,o,p);
	Node *newNode;
	newNode = new Node;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	newNode->data = book;

	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
}

void DoublyLinkedList::displayFromHead()
{
	Node *temp = head;
	if (head == nullptr)
	{
		cout << "NO Bookings To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showBookingInfo();
			cout << endl;
			temp = temp->next;

			if (temp == nullptr)
				break;

		}
	}
}

void DoublyLinkedList::displayFromTail()
{
	Node *temp = tail;
	if (head == nullptr)
	{
		cout << "NO Bookings To show.." << endl;
	}
	else
	{
		while (true)
		{
			temp->data.showInfoTomember();
			cout << endl;
			temp = temp->prev;

			if (temp == nullptr)
				break;

		}
	}
}
void DoublyLinkedList::search(string d) //searching used here
{
	Node* temp = tail;
	if (head == nullptr)
	{
		cout << "NO Bookings To search.." << endl;
	}
	else{
		while (true)
		{
			if (temp->data.memberID == d || temp->data.date == d || temp->data.roomID == d)
			{
				temp->data.showBookingInfo();

				break;
			}

			else
			{
				temp = temp->prev;
			}
		}
	}
}
void DoublyLinkedList::edit(string m, string d, string ts, string te, string r, string o, int p)
{
	Node* temp = tail;
	
		while (true)
		{
			if (temp->data.memberID == m)
			{

				temp->data.date = d;
				temp->data.timeStart = ts;
				temp->data.timeEnd = te;
				temp->data.roomID = r;
				temp->data.organizer = o;
				temp->data.NoOFparticipants = p;
				break;
			}

			else
			{
				temp = temp->prev;
			}
		}
	
}
void DoublyLinkedList::deleteInBetween(string val)
{
	Node *temp = tail;
	Node *temp1 = head;
	if (head == nullptr)
	{
		cout << "NO booking To delete.." << endl;
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

DoublyLinkedList::~DoublyLinkedList()
{


}