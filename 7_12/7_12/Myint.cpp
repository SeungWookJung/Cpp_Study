#include "Myint.h"
#include <iostream>

//�⺻ ������
Myint::Myint()
	:mnum(0)
{
	cout << "������ ȣ��" << endl;
}
//�Ҹ���
Myint::~Myint()
{
	delete mnum;
	mnum = nullptr;
	cout << "�Ҹ��� ȣ��" << endl;
}
//������
Myint::Myint(int x)
{
	*mnum = x;
}
//���� ������ Myint n2(n1)
Myint::Myint(const Myint& c)
{
	*mnum = *c.mnum;
}

void Myint::copy(const Myint& c)
{
	if (mnum == nullptr)
	{
		cout << "������ �����ϴ�. �߰��� �Ҵ��� �˴ϴ�." << endl;
		mnum = new int;
	}
	*mnum = *c.mnum;
}
Myint Myint::operator+(const Myint& c)
{
	return Myint(*mnum + *c.mnum);
}

int Myint::GetNum() 
{
	return *mnum;
}
void Myint::SetNum(int x)	
{
	*mnum = x;
}
//���
void Myint::Print()
{
	cout << *mnum << endl;
}