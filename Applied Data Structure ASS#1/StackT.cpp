#include "StackT.h"
#include<iostream>
StackT::StackT(int s) :size(s), top(-1)
{
	arr = new int[size];
}

StackT::~StackT()
{
	delete []arr;
}

void StackT::push(int num)
{
	if (!isFull())
		arr[++top] = num;
}

int StackT::pop()
{
	if (!(this->isEmpty()))
	{
		int temp = top;
		top--;
		return arr[temp];
	}
	return -1;

}

bool StackT::isEmpty()
{
	if(top==-1)
	return true;
	return false;
}

bool StackT::isFull()
{
	if (top == size-1)
	return true;
	return false;
}

int StackT::peek()
{
	if(!isEmpty())
	return arr[top];
}

int StackT::capacity()
{
	return size;
}

void StackT::showStack()
{
	if (top == -1)
	{
		cout << "Empty";
	}
	for (int i = top; i >= 0; i--)
	{
		cout << this->arr[i]<<" ";
	}
	cout << endl;
}
