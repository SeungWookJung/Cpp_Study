#include "MyInt.h"
#include <iostream>

using namespace std;

int main()
{
	//���� ������(Ŭ���������� �޴� ���ڸ� &�� ����Ѵ�), �ѱ�� ���ڴ� �״�� ����ϸ� �ȴ�.
	//MyInt n3(n2);

	MyInt n1;
	MyInt n2(3);

	n1 = n2;
	n1.Set(66);

	n1.print();
	return 0;
}
