#include <iostream>

using namespace std;
void Func1()
{
	int num1 = 3;
	cout << "num1 : " << num1 << endl;
}
void Func2()
{
	int num2 = 5;
	cout << "num2 : " << num2 << endl;
}

int main()
{
	const int MAX = 10;

	//int thisNumPoint = 10;
	const int THIS_NUM_POINT = 10;

	int num[MAX];

	//1.�ʱ�ȭ
	for (int i = 0; i < 3; i++) 
	{
		num[i] = 0;
	}
	//2. �� �Ҵ� (����)
	for (int i = 0; i < 3; i++)
	{
		num[i] = 0;
	}
	//3. ȭ�鿡 ���
	for (int i = 0; i < 3; i++)
	{
		cout << num[i] << endl;
	}


	Func1();
	Func2();

	//�ϳ��� ������ �����Ҽ� �ִ�.
	static int num = 1;

	return 0;
}
