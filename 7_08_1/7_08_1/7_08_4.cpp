#include <iostream>

using namespace std;

int Add(int num1,int num2)
{
	int result = num1 + num2;
	return result;
}

float Add(float num1, float num2)
{
	float result = num1 + num2;
	return result;
}

double Add(double num1, double num2)
{
	double result = num1 + num2;
	return result;
}

template<typename MyType>
void Func(MyType num1, MyType num2)
{
	MyType result = num1 + num2;
	cout << "result : " << result << endl;
	cout << "rtype  : " << thpeid(MyType).name() << endl;
}

//�Լ� �����ε�
//Add�Լ� �����
/*
�Լ��� : Add
input : num1,num2(int,float,double)
output : result(num1+num2)
*/
int main()
{
	int num1, num2 = 0;
	float num3, num4 = 0;
	double num5, num6 = 0;

	cout << "�����Է�1(����)" << endl;
	cin >> num1;

	cout << "�����Է�2(����)\n" << endl;
	cin >> num2;

	Add(num1, num2);
	cout << "\n" << Add(num1, num2) << endl;


	cout << "�����Է�1(�Ǽ�)" << endl;
	cin >> num3;

	cout << "�����Է�2(�Ǽ�)\n" << endl;
	cin >> num4;

	Add(num3, num4);
	cout << "\n" << Add(num3, num4) << endl;


	cout << "�����Է�1(����)" << endl;
	cin >> num5;

	cout << "�����Է�2(����)\n" << endl;
	cin >> num6;

	Add(num5, num6);
	cout << "\n" << Add(num5, num6)  << endl;


	return 0;
}
