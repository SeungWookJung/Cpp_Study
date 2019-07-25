#include "DoubleLinkedList.h"
#include <iostream>
#include <list>

using namespace std;

int main(int argc, char** argv)
{
	DoubleLinkedList DL;

	for (int i = 1; i <= 5 ; i++)
	{
		DL.PushBack(i);
	}

	DL.Print();

	DL.Clear();

	DL.Print();

	return 0;
}
