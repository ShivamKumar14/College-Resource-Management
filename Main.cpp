#include"DoublyLinkedList.h"
#include"RoomList.h"
#include"MemberList.h"
#include"Stack.h"
#include"Queue.h"
#include"Room.h"
#include"Member.h"
#include"Admin.h"
#include"Booking.h"
 #include<string>
#include<windows.h>
#include<cstdlib>
int Booking::count=0;
int Room::roomcount=0;
int main()
{
	Queue membersqueue(200);//Queue is made of 200 members.
	Stack roomss(50);  //Stack of 50 rooms.
	char admin_id[50]="500083476";
	char admin_name[50]="Shivam Kumar";
	char admin_password[50]="admin123";
	char admin_phoneNo[50]="6203571437";
	char admin_email[50]="shivamkr@gmail.com";
	Admin adminstrator(admin_id,admin_name,admin_password,admin_phoneNo,admin_email);
	Member members("500083210","Sneha Aggrwal","user123","6203571567","Staff","Snehaaggrwal@gmail.com");
	MemberList member;
	RoomList room;
	DoublyLinkedList booking; 
	int choice, num;
	string rt, id, Date, st, et, rid, organizer, em, name, pass1, del,searche;
	int capacity;
	cout<<"Press '1' for Admin or '2' for Member: ";
    cin>>choice;
	system("cls");
	if(choice==1)
	{
	while(1)
	{
    string user,pass;
	cout<<"Username: ";
	cin>>user;
	cout<<"Password: ";
	cin>>pass;
	if(user== "500083476" && pass=="1234")
	{
	  Sleep(1000);
	  system("cls");
	  cout<<"Log IN Successfull."<<endl;
	  Sleep(1500);
	  system("cls");
	  while(1)
	  {
	  cout<<"Press '1' to View all booking records."<<endl;
	  cout<<"Press '2' to Add Booking."<<endl;
	  cout<<"Press '3' to Edit Booking"<<endl;
	  cout<<"Press '4' to Delete Booking"<<endl;
	  cout<<"Press '5' to Search the booking records."<<endl;
	  cout<<"Press '6' to View all Rooms."<<endl;
	  cout<<"Press '7' to Add a room."<<endl;
	  cout<<"Press '8' to Edit a room info."<<endl;
	  cout<<"Press '9' to Delete a room."<<endl;
	  cout<<"Press '10' to view all members info."<<endl;
	  cout<<"Press '11' to Add a member."<<endl;
	  cout<<"Press '12' to Edit a member info."<<endl;
	  cout<<"Press '13' to Delete a member info."<<endl;
	  cout<<"Press '14' to Exit."<<endl;
	  cin>>choice;


	  switch(choice)
	  {
	  case 1:
		  system("cls");
		  booking.displayFromHead();
		  system("pause");
		  system("cls");
		  break;
	  case 2:
		  system("cls");
		  cout<<"Enter Member ID:";
		  cin>>id;
		  cout<<"Enter Date:";
		  cin>>Date;
		  cout<<"Enter Start Time:";
		  cin>>st;
		  cout<<"Enter End Time:";
		  cin>>et;
		  cout<<"Enter RoomID:";
		  cin>>rid;
		  cout<<"Enter Organizer:";
		  cin>>organizer;
		  cout<<"Enter No Of Participants:";
		  cin>>capacity;
		  booking.insert(id,Date,st,et,rid,organizer,capacity);
		  cout<<"Added Successfully.."<<endl;
		  system("pause");
		  system("cls");
		  break;
	  case 3:
		  system("cls");
		  cout << "Enter Member ID:";
		  cin >> id;
		  cout << "Enter Date:";
		  cin >> Date;
		  cout << "Enter Start Time:";
		  cin >> st;
		  cout << "Enter End Time:";
		  cin >> et;
		  cout << "Enter RoomID:";
		  cin >> rid;
		  cout << "Enter Organizer:";
		  cin >> organizer;
		  cout << "Enter No Of Participants:";
		  cin >> capacity;
		  booking.edit(id, Date, st, et, rid, organizer, capacity);
		  cout << "Edited Successfully.." << endl;
		  system("pause");
		  system("cls");
		     break;
	  case 4:
		  system("cls");
		  cout << "Enter the Member ID:";
		  cin >> del;
		  booking.deleteInBetween(del);
		  cout << "Deleted Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 5:
		  system("cls");
		  cout << "Enter 1 to search by Date." << endl;
		  cout << "Enter 2 to search by RoomID." << endl;
		  cout << "Enter 3 to search by MemberID." << endl;
		  cin >> num;

		  if (num == 1)
		  {
			  cout << "Enter Date: ";
		  }
		  else if (num == 2)
		  {
			  cout << "Enter Room ID: ";
		  }
		  else if (num == 3)
		  {
			  cout << "Enter MemberID: ";
		  }
		  cin >> searche;
		  booking.search(searche);
		  system("pause");
		  system("cls");
		  break;

      case 6:
	     system("cls");
	     room.displayFromHead();
    	 system("pause");
	     system("cls");
		  break;
      case 7:
		  system("cls");
		  cout << "Total rooms added: " << Room::roomcount << endl;
		  cout << "No of rooms Left: " << 50 - Room::roomcount << endl;
		  cout<<"Enter Room Type:";
          cin>>rt;
		  cout<<"Enter RoomID:";
		  cin>>id;
		  cout<<"Enter Room capacity:";
		  cin>>capacity;
		  room.insert(rt,id,capacity);
		  cout<<"Room Added.."<<endl;
		  system("pause");
		  system("cls");
		  
		  break;
	  case 8:
		  system("cls");
		  cout << "Enter RoomID:";
		  cin >> id;
		  cout << "Enter Room Type:";
		  cin >> rt;
		  
		  cout << "Enter Room capacity:";
		  cin >> capacity;
		  room.edit(rt, id, capacity);
		  cout << "Edited Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 9:
		  system("cls");
		  cout << "Enter the Room ID:";
		  cin >> del;
		  room.deleteInBetween(del);
		  cout << "Deleted Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 10:
		  system("cls");
		  member.displayFromHead();
		  system("pause");
		  system("cls");
		  break;
	  case 11:
		  system("cls");
		  cout<<"Enter Member ID:";
		  cin>>id;
		  cout<<"Enter Name:";
		  cin>>name;
		  cout<<"Enter Password:";
		  cin>>pass1;
		  cout<<"Enter Membership Type:";
		  cin>>et;
		  cout<<"Enter Phone NO:";
		  cin>>rid;
		  cout<<"Enter Email:";
		  cin>>em;
		  member.insert(id,name,pass1,et,rid,em);
		  cout<<"Added Successfully.."<<endl;
		  system("pause");
		  system("cls");
		  
		  break;
	  case 12:
		  system("cls");
		  cout << "Enter Member ID:";
		  cin >> id;
		  cout << "Enter Name:";
		  cin >> name;
		  cout << "Enter Password:";
		  cin >> pass1;
		  cout << "Enter Membership Type:";
		  cin >> et;
		  cout << "Enter Phone NO:";
		  cin >> rid;
		  cout << "Enter Email:";
		  cin >> em;
		  member.edit(id, name, pass1, et, rid, em);
		  cout << "Edited Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 13:
		  system("cls");
		  cout << "Enter the Member ID:";
		  cin >> del;
		  member.deleteInBetween(del);
		  cout << "Deleted Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 14:
		  return 0;
	  }
	  
	  }
	  return 0;
	}
	Sleep(2000);
	cout<<"Invalid Username or Password!!"<<endl;
	Sleep(1000);
	cout<<"Please Try Again.."<<endl;
	Sleep(1500);
	system("cls");
	}
	}
	else if (choice==2)
	{
		while(1)
	{
    string user,pass;
	cout<<"Username: ";
	cin>>user;
	cout<<"Password: ";
	cin>>pass;
	
		if(user== "500083210" && pass=="user123")
	{
	  Sleep(1000);
	  system("cls");
	  cout<<"Log IN Successfull."<<endl;
	  Sleep(1500);
	  system("cls");
	  while(1)
	  {
	  cout<<"Press '1' to Add Booking."<<endl;
	  cout<<"Press '2' to View Past Booking Records By Date."<<endl;
	  cout<<"Press '3' to Exit."<<endl;
	  cin>>choice;
	  switch(choice)
	  {
	  case 1:
		  system("cls");
		  cout << "Total Booking of rooms By members: " << Booking::count<<endl;
		  cout << "No of Booking Left: " << 500 - Booking::count << endl<<endl;
		  cout << "Enter Member ID:";
		  cin >> id;
		  cout << "Enter Date:";
		  cin >> Date;
		  cout << "Enter Start Time:";
		  cin >> st;
		  cout << "Enter End Time:";
		  cin >> et;
		  cout << "Enter RoomID:";
		  cin >> rid;
		  cout << "Enter Organizer:";
		  cin >> organizer;
		  cout << "Enter No Of Participants:";
		  cin >> capacity;
		  booking.insert(id, Date, st, et, rid, organizer, capacity);
		  cout << "Added Successfully.." << endl;
		  system("pause");
		  system("cls");
		  break;
	  case 2:
		  system("cls");
		  booking.displayFromTail();
		  system("cls");
		  system("pause");
		  break;
	  case 3:
		  return 0;
		   break;
	  
	  }
	}
		}}}
	system("pause");
	return 0;
}
