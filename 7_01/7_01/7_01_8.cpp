#include <iostream>
#include <time.h>  //�����Լ� �ߺ� ���ſ� �ʿ��� ���̺귯��

using namespace std;

int main()
{
	int max = 10;
	int list[5] = {0,0,0,0,0};

	srand(time(NULL)); //�����Լ� �ߺ��� ����

	for(int i=0;i<5;i++){

	 list[i] = rand() % (max + 1);

		cout << "�������� 5 ��: " << list[i] << endl;
		
	}

	return 0;
}