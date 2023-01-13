#pragma once
#include <iostream>
using namespace std;
class Queue
{
	int current_size;
	int max_size;
	int rear;
	int front;
	int *arr;
public:
	Queue(int s);
	void enqueue(int val);
	bool isEmpty();
	bool isFull();
	void display();
	int dequeue();
	~Queue();
};
