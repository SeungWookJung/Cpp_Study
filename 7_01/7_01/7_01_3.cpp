#include <iostream>

using namespace std;

int Result(int input);

//Ȧ���� ¦���� �����϶�
int main()
{
	int input,result = 0;
	cout << "�Ǻ��� ���ڸ� �Է��ϼ��� : "; //���� �Է� ����
	cin >> input;

	result = Result(input);
	cout << result << "  �Ǻ��Ϸ�" << endl; //�Ǻ� �ϷṮ

	return 0;
}

//�Ǻ����ִ� �Լ�
int Result(int input)
{
	if (input % 2 == 0) //Ȧ¦ ���� �Ǻ� ��
	{
		cout << "¦�� �Դϴ�." << endl;  //¦���϶�
	}
	else
		cout << "Ȧ�� �Դϴ�." << endl; // Ȧ�� �϶�
	return input;
}