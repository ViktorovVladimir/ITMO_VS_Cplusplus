// app04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Stack
{
public:
	int mas[10];
	int size;
	//--.
	void reset()
	{
		memset(mas, 0, 40);
		size = 0;
	}
	//--.
	bool push(int in)
	{
		if (size == 10)
			return false;

		mas[size] = in;
		size++;

		return true;
	}
	//--.
	int pop()
	{	
		if( size == 0 )
		{
			std::cout << "there are no values ​​on the stack";
			return 0;
		}
		return mas[size--];
	}
	//--.
	void print()
	{
		std::cout << "( ";

		for( int i=0;  i<size;  i++)
		{
			std::cout << mas[i] << " ";
		}

		std::cout << ") \n";
	}

private:

};



int main()
{	
	Stack stack;
	stack.reset();
	stack.print();
	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();
	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	
	return 0;
}	

