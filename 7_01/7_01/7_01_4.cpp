#include <iostream>

using namespace std;

int Score(int input); //�����Ǻ� �Լ�

//������ A ~ F �� �Ǻ��ϴ� ��� ����
int main() 
{
	int input = 0;
	cout << "���輺���� �Է��Ͽ� �ּ���\t"; 
	cin >> input;  //�Է°�

	input = Score(input);  //�����Ǻ� �Լ� ȣ��
	
	return 0;
}

int Score(int input)
{
	if ((input >= 90) && (input<=100))
	{
		cout << "������ A �Դϴ�." << endl;
	}
	else if ((input >= 80) && (input <= 89))
	{
		cout << "������ B �Դϴ�. " << endl;
	}
	else if ((input >= 70) && (input <= 79))
	{
		cout << "������ C �Դϴ�. " << endl;
	}
	else if ((input >= 60) && (input <= 69))
	{
		cout << "������ D �Դϴ�." << endl;
	}
	else
		cout << "������ F �Դϴ�." << endl;   //������ ������ F

	return input;  //�Է� �� ��ȯ
}