#pragma once
#include <ostream>

class MyInt
{
public:
	MyInt();
	~MyInt();
	MyInt(int num);

	//���� ������ &�� ���
	MyInt(const MyInt &inData);
	MyInt& operator=(const MyInt& inData);

public:
	void print();
	void Set(int num);
	int Get();

	//friend �� �ٸ� ������ ���� �ϴ� ��
	friend ostream& operator<<(ostream& os, const MyInt& inData);

private:
	int m_num;
};