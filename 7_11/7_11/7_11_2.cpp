#include "Human.h"
#include <iostream>

using namespace std;

/*��� ���� : hp,mp
	��� �Լ� : Run,Walk -> �޼��� ���

	�⺻ ������
	������(hp,mp)

	attack -> mp > 0 �̻��϶��� ���� ����, �����ߴ�,mp�� ���� ��Ű����

	*/
int main()
{
	Human h1;
	int HP = 100;
	int MP = 0;
	int enemy = 100;
	
		cout << "HP�� MP�� �Է��� �ּ��� : ";
		cin >> HP;
		cin >> MP;

		h1.Set(HP, MP);

		HP = h1.GetHp();
		MP = h1.GetMp();
		h1.Run();

		cout << "���� �������ϴ�. �������ּ���" << endl;

		while (1)
		{
			h1.Attack(MP);
			MP = h1.GetMp();
			enemy -= 5;
			if (enemy == 0)
			{
				cout << "���� �����ƽ��ϴ�. �����մϴ�." << endl;
				break;
			}
		}


	return 0;
}