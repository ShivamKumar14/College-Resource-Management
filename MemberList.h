#pragma once
#include"Member.h"
#include <iostream>
using namespace std;

struct Nodem
{
	Member data;
	Nodem* next;
	Nodem* prev;
};

class MemberList

{
	Nodem*head;
	Nodem*tail;
public:
	MemberList();
	void insert(string id, string n, string pas, string t, string ph, string em);
	void displayFromHead();
	void displayFromTail();
	void deleteInBetween(string val);
	void edit(string id, string n, string pas, string t, string ph, string em);
	~MemberList();

};


