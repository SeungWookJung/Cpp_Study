#include "Point.h"
#include <iostream>

using namespace std;

Point::Point()
	:mx(0),my(0) //�ʱ�ȭ ����Ʈ
{
	cout << "������ ȣ��" << endl;
}
Point::~Point()
{
	cout << "�Ҹ��� ȣ��" << endl;
	
}
Point::Point(int x, int y)
{
	mx = x;
	my = y;
}
void Point::ShowPoint()
{
	cout << "(mx,my) = (" << mx << "," << my << ")\n";
}