#include <iostream>

using namespace std;

int main()
{
	while (1)
	{
		int num = 0;

		cout << "������ �Է��ϼ��� :";
		cin >> num;

		if (cin.fail())
		{
			cout << "�߸� �Է��ϼ̽��ϴ�\n";
			cin.clear();
			cin.ignore();

			continue;
		}

		cout << "\n�Է��Ѽ� =" << num << "\n";
	}
	return 0;
}
