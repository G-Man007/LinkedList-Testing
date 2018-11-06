/**
*	@author Grant Stewart
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "testListOfInts.h"

int main(int argc, char** argv)
{
	std::cout << std::endl;

	testListOfInts tester;
	tester.testList();

	std::cout << std::endl;
	return (0);
}
