#include <iostream>

using namespace std;

int main()
{

	int data[10] = {};

	for (int i = 0; i < 10; i++)
	{
		if (data[i] % 2 == 0)
		{
			cout << i << " : " << data[i] << " �� ¦���Դϴ�.";
		}
		else
		{
			cout << i << " : " << data[i] << " �� Ȧ���Դϴ�.";
		}
	}
	return 0;
}