#include <iostream>

using namespace std;


int main()
{
	int* num = new int;
	*num = 100;
	cout << *num << endl;

	delete num;
	
	return 0;
}