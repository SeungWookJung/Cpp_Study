#include <iostream>

using namespace std;

//�Լ��� ����ο��� �⺻ ���� �־� ������ �ش� ���� �⺻������ ���� // �����ʺ��� ����
int Add(int a ,int b,int c = 1,int d = 1,int e = 1);

// �Ʒ��� ����� �ȵȴ�.
//int Add(int x=0, int y);  (X)
// �Ʒ��� ����� �ȴ�.
// int Add(int x =0,int y= 0);  (O)

void Resolution(int width = 800, int height = 600);


int main()
{
	Resolution();
	Resolution(1200, 900);

	//int result = 0;
	//result = Add(2,3); //�Լ��� ���

	//cout << "result= " << result << endl;

	return 0;
}

//�Ķ���͸� ���������
int Add(int a, int b, int c, int d, int e)
{
	int result = 0;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;

	result = (a + b + c + d + e);

	return result;
}

void Resolution(int width, int height)
{
	cout << "(width, height) =  ( " << width << "," << height << ")" << endl;

}