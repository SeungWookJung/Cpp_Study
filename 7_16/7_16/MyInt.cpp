#include "MyInt.h"
#include <iostream>
#include <ostream>

using namespace std;

MyInt::MyInt()
	:m_num(0)
{
}
MyInt::~MyInt()
{
	cout << "�Ҹ��� ��ȯ"<<endl;
}
MyInt::MyInt(int num)
	:m_num(num)
{
	cout << num << " ���� ���� ����ϴ�." << endl;
}

//���� ������ &�� ���
MyInt::MyInt(const MyInt& inData)
	:m_num(inData.m_num)
{
}
MyInt& MyInt::operator=(const MyInt& inData)
{
	m_num = inData.m_num;
	return *this;
}

void MyInt::print()
{
	cout << m_num << endl;
}
inline void MyInt::Set(int num)
{
	m_num = num;
}
inline int MyInt::Get()
{
	return m_num;
}
ostream& operator<<(ostream& os, const MyInt& inData)
{
	os << inData.m_num;
	return os;
}