#define MaxNum 10
#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	for (int i = 1; i  < MaxNum+1; i++)
	{
		if ((i % 2) == 0)
		{
			num += i;
		}
		else
			continue;
	}
	cout <<"�հ�� : " << num << " �Դϴ�."<<endl;

	return 0;
}
