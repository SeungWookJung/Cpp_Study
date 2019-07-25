#include "Template_List.h"

#include <list>

int main()
{
	LinkedList<int> list;

	list.PushBack(1);
	list.PushBack(2);
	list.PushBack(3);
	list.Print();

	LinkedList<float> list2;

	list2.PushBack(1.11f);
	list2.PushBack(2.22f);
	list2.PushBack(3.33f);
	list2.Print();

	return 0;
}