#include <iostream>

using namespace std;


void Divide(double dividend, double divider, double* result)
{
	if (divider == 0)
		throw false;

	*result = dividend / divider;
	return;
}
int main()
{
	double num1, num2, result;

	cout << "A/B �� ������ 2���� �� �Է�: ";
	cin >> num1 >> num2;

	try
	{
		Divide(num1, num2, &result);
		cout << num1 << "/" << num2 << "=" << result << endl;
	}
	catch (bool exception)
	{
		cout << "Invalid Value!!!" << endl;
		exit(0);
	}

	return 0;
}
