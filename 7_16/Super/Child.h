#pragma once
#include "Parent.h"

class Child : public Parent
{
public:
	void Print3()
	{
		Print2();
		cout << "�ڽ� Ŭ�����Դϴ�" << endl;
	}
protected:

private:

};