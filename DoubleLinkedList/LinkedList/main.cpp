#include "LinkedList.h"


int main()
{
	LinkedList list;

	// 1. 비어있는 경우
	list.PushBack(1);
	// 2. 값이 존재하는 경우
	list.PushBack(2);
	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);

	// 0. 리스트의 모든 값을 출력
	list.Print(5);

	return 0;
}