#pragma once
#include<iostream>
#include<string>
using namespace std;
class Member
{
public:
	string memberID;
	string name;
	string password;
	string membershipType;
	string phoneNo;
	string email;
public:
	Member();
	Member(string id,string n,string pas,string t,string ph,string em);
	void displayInfo();
	~Member();
};

