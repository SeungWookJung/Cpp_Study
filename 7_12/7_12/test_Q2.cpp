#include <iostream>

using namespace std;

int main()
{
	int score = 0;
	int result = 0;

	while (1)
	{
		cout << "���������� �Է��ϼ��� : ";
		cin >> score;
		result += score;
		if (score == 0)
		{
			break;
		}
	}
	cout << "���� ������ �հ�� " << result << " �� �Դϴ�." << endl;
	return 0;
}
