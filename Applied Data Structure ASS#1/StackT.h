#ifndef STACKT_H
#define STACKT_H
using namespace std;

class StackT
{
	int size;
	int* arr;
	int top;
public:
	StackT(int);
	~StackT();
	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	int peek();
	int capacity();
	void showStack();


};
#endif
