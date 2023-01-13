#include "Admin.h"
#include <cstring>
//#include<bits/stdc++.h>


Admin::Admin(char* id, char* n, char* pas, char* ph, char* em)
{
	int len;
	len = strlen(id);
	AdminID = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		AdminID[i] = id[i];
	}
	AdminID[len] = '\0';

	len = strlen(n);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';

	len = strlen(pas);
	password = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		password[i] = pas[i];
	}
	password[len] = '\0';

	len = strlen(ph);
	phoneNo = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		phoneNo[i] = ph[i];
	}
	phoneNo[len] = '\0';

	len = strlen(em);
	email = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		email[i] = em[i];
	}
	email[len] = '\0';
}
void Admin::displayInfo()
{
	cout << "Admin ID: " << AdminID<<endl;
	cout << "Name: " << name << endl;
	cout << "Phone No: " << phoneNo << endl;
	cout << "Email: " << email << endl;

}

Admin::~Admin()
{
	delete[]AdminID;
	AdminID = NULL;

	delete[]name;
	name = NULL;

	delete[]password;
	password = NULL;

	delete[]phoneNo;
	phoneNo = NULL;

	delete[]email;
	email = NULL;
}
