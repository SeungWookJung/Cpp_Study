#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void Game_(string input,string C_result);
string C_rand();

//��ǻ�Ϳ� ���� ����,����,���� �ϴ� ����
int main()
{	
	srand((unsigned int)time(NULL));
	string C_result = C_rand(); //��ǻ�� ���� ����,���� ,��
	

	string input;
	cout << "���� ���� �� �߿� �ϳ��� �Է��ϼ��� : ";
	cin >> input;

	Game_(input,C_result); // ��ǻ�Ϳ� ����ϴ� �Լ��� ������. ��ǻ���� ���� ���ڿ� ,����� ���� ���ڿ�
	return 0;
}

//��ǻ�Ϳ� ����ڰ� ����ϴ� �Լ�
void Game_(string input, string C_result)
{
	if ((input == "����") && (C_result == "����"))
	{
		cout << "��ǻ�Ͱ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else if ((input == "����") && (C_result == "��"))
	{
		cout << "����ڰ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else if ((input == "����") && (C_result == "����"))
	{
		cout << "����ڰ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else if ((input == "����") && (C_result == "��"))
	{
		cout << "��ǻ�Ͱ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else if ((input == "��") && (C_result == "����"))
	{
		cout << "��ǻ�Ͱ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else if ((input == "��") && (C_result == "����"))
	{
		cout << "����ڰ� �̰���ϴ�. \t" << "��� = " << input << " ��ǻ�� = " << C_result << endl;
	}
	else
		cout<<"���º� �Դϴ�."<< "��� = " << input << " ��ǻ�� = " << C_result << endl;
}

//��ǻ���� ���� �������� ���� �̾� �ִ¼�
string C_rand() 
{
	string C_result;
	srand(time(NULL));
	int result = rand() % (3 + 1);
	
	if (result == 1)
	{
		C_result = "����";
		return C_result;
	}
	else if (result == 2)
	{
		C_result = "����";
		return C_result;
	}
	else
		C_result = "��";

	return C_result;
}