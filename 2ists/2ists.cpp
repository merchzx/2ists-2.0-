// 2lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "List.h"
using namespace std;

bool func(int value) {
	return value> 5;
}

bool func1(int value) {
	return value < 5;
}

int main()
{
	List list;
	list.push_back(10);
	list.push_back(12);
	list.push_back(13);
	List list2;
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	List list3 = list + list2;
	list3.show();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file