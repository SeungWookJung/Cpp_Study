#include <iostream>

using namespace std;

int main()
{
	string name = "�̸�";
	string language = "C++";

	int x = 10;
	int y = 10;

	if (name != language)
		cout << "�� ������ ���� �ʽ��ϴ�." << endl;
	else
		cout << "�� ������ �����ϴ�." << endl;
	if(x>=y)
		cout << "x�� y�� ũ�ų� �����ϴ�." << endl;
	else
		cout << "x�� ���� ũ�ų� ���� �ʽ��ϴ�." << endl;

	if (x >= y)
		cout << "x�� y���� ũ�ų� �����ϴ�" << endl;
	else
		cout << "x�� y���� ũ�ų� ���� �ʽ��ϴ�" << endl;

	if (x >= y)
		cout << "x�� 20���� �۰ų� �����ϴ�" << endl;
	else
		cout << "x�� 20���� �۰ų� ���� �ʽ��ϴ�." << endl;

	return 0;
}