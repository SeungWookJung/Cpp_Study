#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*
	//0~9
	int arr[10] = {};
	
	for (int i = 0;i <size(arr); i++) //�迭�� ���� �������(����)
	{
		arr[i] = i;
		cout << arr[i]<<"\n";
	}


	for (int i = 0; i <= size(arr); i++) //�迭�� �ʱ�ȭ(����)
	{
		arr[i] = 0;
		cout << arr[i] << endl;
	}*/

	//�迭�� \0 ���� ���� ������ string �� ���ÿ��� ����� ������
	char arr2[10];

	for (int i = 0; i < size(arr2); i++) //�迭�� ���� �������(����)
	{
		
		arr2[i] = 'a' + i;
		cout << arr2[i] << "\n";
	}


	for (int i = 0; i <= size(arr2); i++) //�迭�� �ʱ�ȭ(����)
	{
		arr2[i] = '0';
		cout << arr2[i] << endl;
	}

	return 0;
}