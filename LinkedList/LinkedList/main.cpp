#include "LinkedList.h"


int main()
{
	LinkedList list;

	// 1. ����ִ� ���
	list.PushBack(1);
	// 2. ���� �����ϴ� ���
	list.PushBack(2);
	list.PushBack(3);
	list.PushBack(4);
	list.PushBack(5);

	// 0. ����Ʈ�� ��� ���� ���
	list.Print(5);

	return 0;
}