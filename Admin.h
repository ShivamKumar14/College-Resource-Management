#pragma once
#include<iostream>
using namespace std;
class Admin
{
protected:
	char* AdminID;
	char* name;
	char* password;
	char* phoneNo;
	char* email;
public:
	Admin(char* id,char* n,char* pas, char* ph, char* em);
	void displayInfo();

	~Admin();
};

