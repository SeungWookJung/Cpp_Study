#include <iostream>

using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;

	cout << "2���� ������ �Է��Ͻʽÿ�." << endl;
	cin >> num1;
	cin >> num2;

	if (num1 > num2)
	{
		cout << num2 << " ���� " << num1 << " �� Ů�ϴ�." << endl;
	}
	else if (num2 > num1)
	{
		cout << num1 << " ���� " << num2 << " �� Ů�ϴ�." << endl;
	}
	else
	{
		cout << num1 << " �� " << num1 << " �� �����ϴ�." << endl;
	}
	return 0;
}
