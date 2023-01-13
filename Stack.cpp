#include "Stack.h"


Stack::Stack(int s)
{
    size = s;
	current_size = 0;
	arr = new int[size];
}
bool Stack::isFull()
{
	if (current_size == size)
		return true;

	return false;
}

bool Stack::isEmpty()
{
	if (current_size == 0)
		return true;

	return false;
}
void Stack::push(int val)
{
	if (isFull() == true)
	{
		cout << "Stack is Full" << endl;
	}
	else
	{
		arr[current_size] = val;
		current_size++;
	}

}

int Stack::pop()
{
	if (isEmpty() == true)
	{
		cout << "Stack is Empty, I am returning ZERO";
		return 0;
	}

	current_size--;
	return arr[current_size];
}

void Stack::display()
{
	cout << "Max Size: " << size << endl;
	cout << "Current Size: " << current_size << endl;

	for (int i = 0; i < current_size; i++)
	{
		cout << i << ". " << arr[i] << endl;
	}
}
Stack::~Stack()
{
	delete[]arr;
}
