#pragma once
#include <iostream>
using namespace std;
class Stack
{
	int *arr;
	int size;
	int current_size;
public:
	Stack(int s);
	bool isFull();
	bool isEmpty();
	void push(int val);
	int pop();
	void display();
	~Stack();
};
