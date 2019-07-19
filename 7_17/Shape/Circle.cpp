#include "Circle.h"
#include <iostream>

#define PI 3.14

using namespace std;

Circle::Circle(int radius)
	:radius(radius)
{
}
Circle::~Circle()
{
	cout << "Circle �Ҹ���" << endl;
}
float Circle::GetParimeter(int radius)
{
	float result = (radius*2)*PI;

	return result;
}
float Circle::GetArea(int radius)
{
	float result = (radius * radius) * PI;

	return result;
}
void Circle::Print()
{
	cout << "���� �ѷ� : " << GetParimeter(radius) << " ���� ���� : " << GetArea(radius) << endl;
}