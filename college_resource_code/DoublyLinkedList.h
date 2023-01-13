#pragma once
#include"Booking.h"
#include <iostream>
#include<string>
using namespace std;

struct Node
{
	Booking data;
	Node* next;
	Node* prev;
};

class DoublyLinkedList
{
	Node*head;
	Node*tail;
public:
	DoublyLinkedList();
	void insert(string m,string d,string ts,string te,string r,string o,int p);
	void displayFromHead();
	void displayFromTail();
	void deleteInBetween(string val);
	void search(string d);
	void edit(string m, string d, string ts, string te, string r, string o, int p);
	~DoublyLinkedList();

};


