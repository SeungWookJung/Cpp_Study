#pragma once
#include <iostream>

using namespace std;

class Human
{
	int hp = 100;
	int mp = 0;
public:
	void Set(int hp, int mp)
	{
		this->hp = hp;
		this->mp = mp;
		cout << "HP : " << this->hp << "MP : " << this->mp << " �� �����Ǿ����ϴ�." << endl;
	}
	void AddMp(int mp)
	{
		this->mp = mp;
		cout << "MP�� " << this->mp << " �Դϴ�." << endl;
	}
	int GetHp()
	{
		return this->hp;
		cout << "HP�� " << this->hp << " �Դϴ�." << endl;
	}
	int GetMp()
	{
		return this->mp;
		cout << "MP�� " << this->hp << " �Դϴ�." << endl;
	}
	void Run()
	{
		cout << "�ٰ� �ֽ��ϴ�." << endl;
	}
	void Attack(int mp)
	{
		int addMp = 0;
		int resultMp = 0;

		if (mp > 0)
		{
			cout << "���� �߽��ϴ�. mp 10 ����" << endl;
			AddMp((mp - 10));
		}
		else
		{
			cout << "mp �� ��� ������ �Ұ��� �մϴ�." << endl;
			cout << "MP�� ���� ���ּ��� : ";

			int nowMp = GetMp();

			cin >> addMp;

			resultMp = nowMp + addMp;
			AddMp(resultMp);
		}

	}

};