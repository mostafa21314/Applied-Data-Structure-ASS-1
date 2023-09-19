#include<iostream>
#include"StackT.h"
using namespace std;
static int counter = 0;
void Arrange(int num,StackT& source, StackT& auxilary, StackT& destination)
{
	if (num == 1)
	{
		destination.push(source.pop());
		counter++;
		cout << "Source :  "; source.showStack();
		cout << "Auxilary :  "; auxilary.showStack();
		cout << "Destination :  "; destination.showStack();
		cout << endl;

	}
	else
	{
		Arrange(num - 1, source, destination, auxilary);
		Arrange(1, source, auxilary, destination);
		Arrange(num - 1, auxilary, source, destination);

	}

}

int main()
{
	int num;
	cout << "Please enter the number of disks in the tower ";
	cin >> num;
	StackT first(num);
	StackT second(num);
	StackT third(num);
	for (int i = num; i >0; i--)
	{
		first.push(i);
	}
	Arrange(num,first,second,third);
	cout << "Total number of moves = "<<counter;
}