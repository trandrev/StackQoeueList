#include "ListStack.h"
#include "ListQueue.h"
#include <iostream>


void main()
{
	ListQueue<int> test1;
	ListStack<int> test2;
	
	for(int i = 0; i < 5; i++)
	{
		std::cin >> test1;
	}
	
	try
	{
		for(;;)
			std::cout << test1.get() << "|";
	}
	catch (int ee)
	{
		std::cout << std::endl << "queue is empty";
	}
	
	for(int i = 0; i < 5; i++)
	{
		std::cin >> test2;
	}
	
	try
	{
		for(;;)
			std::cout << test2.get() << "|";
	}
	catch (int ee)
	{
		std::cout << std::endl << "stack is empty";
	}

}
