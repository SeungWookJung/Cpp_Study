#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	cout << "��� ���ڸ� ����ó���? " << endl;
	cin >> num;

	int* ar = new int[num];

	for (int i = 0; i < num; i++)
	{
		ar[i] = i;
		cout << "ar[" << i << "] : " << ar[i] << endl;
	}

	delete[] ar;
	ar = nullptr;

	return 0;
}
