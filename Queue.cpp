#include "Queue.h"


Queue::Queue(int s)
{

	max_size = s;
	arr = new int[s];
	current_size = 0;
	front = 0;
	rear = 0;
}
void Queue::enqueue(int val)
{
	if (isFull() == true)
	{
		cout << "Queue IS Full." << endl;
	}
	else
	{
		arr[rear%max_size] = val;
		current_size++;
		rear++;
	}

}


bool Queue::isEmpty()
{
	if (current_size == 0)
		return true;

	return false;
}

bool Queue::isFull()
{
	if (current_size == max_size)
		return true;

	return false;
}

void Queue::display()
{
	cout << "Max Size: " << max_size << endl;
	cout << "Current Size: " << current_size << endl;

	for (int i = front; i < rear; i++)
	{
		cout << arr[i%max_size] << endl;
	}

}

int Queue::dequeue()
{
	if (isEmpty() == true)
	{
		cout << "Q is EMPTY" << endl;
		return 0;
	}

	int returningValue = arr[front%max_size];
	front++;
	current_size--;
	return returningValue;
}

Queue::~Queue()
{
	delete[]arr;
}
