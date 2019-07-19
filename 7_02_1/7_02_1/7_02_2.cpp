#include <iostream>

using namespace std;


int GetRand(int max = 3)
{
	int num = rand() % (max + 1);
	return (num);
}

string Convert(int codeNum)
{
	string msg = "";
	if (codeNum == 0)
		msg = "����";
	else if (codeNum == 1)
		msg = "����";
	else if (codeNum == 2)
		msg = "��";
	return msg;
}

// (����=0, ����=1, ��=2)
// ( 1 �¸� , 0 ���º� , -1 �й� )
int PlayGame(int player, int computer)
{
	cout << "player  : " << Convert(player) << endl;
	cout << "computer: " << Convert(computer) << endl;

	if (player == computer)	// ���º�
	{
		cout << "�����ϴ�." << endl;
		return 0;
	}
	else if (player == 0)	// �¸� 1
	{
		if (computer == 2)
			return 1;
	}
	else if (player == 1)	// �¸� 2
	{
		if (computer == 0)
			return 1;
	}
	else if (player == 2)	// �¸� 3
	{
		if (computer == 1)
			return 1;
	}
	else
	{
		cout << "�й��߽��ϴ�." << endl;
		return -1;
	}
}

bool IsEnd(int numPlayer)
{
	if (numPlayer == -1)
	{
		cout << "���α׷��� �����մϴ�." << endl;
		exit(0);
	}
}

bool IsRange(int numPlayer)
{
	if ((numPlayer > 2) || (numPlayer < 0))
	{
		cout << "�߸� �Է��ϼ̽��ϴ�." << endl;

		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int main()
{

	while (true)
	{
		int numComputer = GetRand();
		int numPlayer = -1;

		cout << "(����=0, ����=1, ��=2) ����= -1 \n"
			<< "Player: ";
		cin >> numPlayer;

		// ���� Ȯ��
		IsEnd(numPlayer);
		//����Ȯ��
		IsRange(numPlayer);

		//	(1 �¸�, 0 ���º�, -1 �й�)
		int result = PlayGame(numPlayer, numComputer);
		switch (result)
		{
		case -1:
			cout << "�й��߽��ϴ�.\n";
			break;
		case 0:
			cout << "�����ϴ�.\n";
			break;
		case 1:
			cout << "�̰���ϴ�.\n";
			break;
		}

		cout << "\n\n";
	}


	return 0;
}
