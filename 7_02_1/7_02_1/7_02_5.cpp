#include <iostream>  
#include <string> 
#include <Windows.h>  //����ð��� �޾ƿ��� ���� ������ ���̺귯��
#include <cstdlib> //������ ���� ���̺귯��


using namespace std;


int NowTime(); //����ð��� ���ϴ� �Լ�
int NowDay(); //���� ���� ���ϴ� �Լ�
bool In(int CarNumber,int time,int day); // �������� �� ��������,�ð� �־��ִ� �Լ�
void Out(int OutCarNumber,int time,int day); // ���������� ��������,�ð� ������ �޾Ƽ� ������ ó�� ���ִ� �Լ�


struct CAR{
	int CarNumber;//�����ѹ�
	int InTime; //���������� �ð�
	int OutTime; //���������� �ð�
	int price; //�ݾ�
	int Inday;//���� ��
	int Outday;// ���� �� 
};
CAR car[100] = {0,};

//���� ���� �ý��� ���� #2019_07_02 
int main()
{
	
	string status;

	while (1) //�ݺ��� ����
	{	
		int CarNumber = 0; //������ ���� ������ �����ϴ� ��ȣ
		int time = 0; //�ð��� ������� ����
		int OutCarNumber = 0;//������ ���� �˻��ϱ����� ����ȣ�� �ӽ÷� �����ϴ� ����
		int day; //������ ���� ���� ����
		string PayAgree; //������ �����ϴ����� ���� ����

		cout << "------- �������� \t �������� \t ��� \t�߿� ���� �ϼ���. ------- " << endl;
		cin >> status;

		if (status == "��������") 
		{
			cout << "������ȣ�� �Է��ϼ���(4�ڸ���) : " << endl;

			cin >> CarNumber;
			time = NowTime();
			day = NowDay();
			if (In(CarNumber, time, day))
			{
				cout << "�۾� ����ó�� �ƽ��ϴ�." << endl;

				time = 0; //�ʱ�ȭ
				CarNumber = 0;//�ʱ�ȭ
			}
			else
			{
				cout << "�۾��� ����ó�� ���� �ʾҽ��ϴ�." << endl;
			}
		}
		else if (status == "��������")
		{
			cout << "������ȣ�� �Է��� �ּ��� : ";
				cin >> OutCarNumber;

				time = NowTime();
				day = NowDay();
				Out(OutCarNumber, time, day);
				
		}
		else if (status == "���") {
			exit(1);
		}
		else
			cout << "�ٽ� �Է��� �ּ���!!" << endl;

	}//�ݺ��� ��

	return 0;
}

int NowTime() //����ð��� ���ϴ� �Լ�
{
	int Now;

	SYSTEMTIME lst;
	GetLocalTime(&lst);

	Now = lst.wHour;

	return Now;
}

int NowDay()
{
	int Now;

	SYSTEMTIME lst;
	GetLocalTime(&lst);

	Now = lst.wDay;

	return Now;
}

bool In(int carNumber, int time,int day) //������ ������ȣ, ���� �ð��� ����ü�� �����ϴ� �Լ�
{
	for (int i = 0; i <= 9; i++)
	{
		if (car[i].CarNumber == NULL)
		{
			car[i].CarNumber = carNumber;
			car[i].Inday = day;
			car[i].InTime = time;

			return true;
		}
		else if (car[i + 1].CarNumber == NULL)
		{
			car[i + 1].CarNumber = carNumber;
			car[i + 1].Inday = day;
			car[i + 1].InTime = time;
			return true;
		}
		else
			return false;
	}
}

void Out(int OutCarNumber,int time,int day) // ������ ������ ��ȣ,�ð��� ã�� ������ִ� �Լ�
{
	string PayAgree;
	for (int i = 0; i <= 9; i++)
	{
		if (car[i].CarNumber == OutCarNumber)
		{
			car[i].OutTime = time;
			if (car[i].Inday == car[i].Outday)
			{
				if (abs(car[i].InTime - car[i].OutTime) <= 2)
				{
					car[i].price = (abs(car[i].InTime - car[i].OutTime)) * 2000;
					cout << "������ȣ : " << OutCarNumber << " ���� " << car[i].price << " �� ���ž� �մϴ�." << endl;

					cout << "���� �Ͻðڽ��ϱ�?(��,�ƴϿ�) " << endl;
					cin >> PayAgree;
					if (PayAgree == "��")
					{
						car[i].CarNumber = NULL;
						car[i].Inday = NULL;
						car[i].InTime = NULL;
						car[i].Outday = NULL;
						car[i].OutTime= NULL;
						car[i].price = NULL;
						cout << "���� �Ǿ����ϴ�" << endl;
						break;
					}
					else
					{
						cout << "���� ���� �ʾҽ��ϴ�." << endl;
						break;
					}
				}
				else if (abs(car[i].InTime - car[i].OutTime) > 2)
				{
					car[i].price = (abs(car[i].InTime - car[i].OutTime)) * 6000;
					cout << "������ȣ : " << OutCarNumber << " ���� " << car[i].price << " �� ���ž� �մϴ�." << endl;
					
					cout << "���� �Ͻðڽ��ϱ�?(��,�ƴϿ�) " << endl;
					cin >> PayAgree;
					if (PayAgree == "��")
					{
						car[i].CarNumber = NULL;
						car[i].Inday = NULL;
						car[i].InTime = NULL;
						car[i].Outday = NULL;
						car[i].OutTime = NULL;
						car[i].price = NULL;
						cout << "���� �Ǿ����ϴ�" << endl;
						break;
					}
					else
					{
						cout << "���� ���� �ʾҽ��ϴ�." << endl;
						break;
					}
				}
			}
			else
			{
			
				
				if (car[i].price = (abs(car[i].InTime / 2 - car[i].OutTime) <= 2)) 
				{
					car[i].price = (abs(car[i].InTime - car[i].OutTime)) * 2000;
					cout << "������ȣ : " << OutCarNumber << " ���� " << car[i].price << " �� ���ž� �մϴ�." << endl;

					cout << "���� �Ͻðڽ��ϱ�?(��,�ƴϿ�) " << endl;
					cin >> PayAgree;
					if (PayAgree == "��")
					{
						car[i].CarNumber = NULL;
						car[i].Inday = NULL;
						car[i].InTime = NULL;
						car[i].Outday = NULL;
						car[i].OutTime = NULL;
						car[i].price = NULL;
						cout << "���� �Ǿ����ϴ�" << endl;
						break;
					}
					else
					{
						cout << "���� ���� �ʾҽ��ϴ�." << endl;
						break;
					}
					break;
				}
				else
				{
					car[i].price = (abs(car[i].InTime - car[i].OutTime)) * 6000;
					cout << "������ȣ : " << OutCarNumber << " ���� " << car[i].price << " �� ���ž� �մϴ�." << endl;

					cout << "���� �Ͻðڽ��ϱ�?(��,�ƴϿ�) " << endl;
					cin >> PayAgree;
					if (PayAgree == "��")
					{
						car[i].CarNumber = NULL;
						car[i].Inday = NULL;
						car[i].InTime = NULL;
						car[i].Outday = NULL;
						car[i].OutTime = NULL;
						car[i].price = NULL;
						cout << "���� �Ǿ����ϴ�" << endl;
						break;
					}
					else
					{
						cout << "���� ���� �ʾҽ��ϴ�." << endl;
						break;
					}

					break;
				}
				
			}
		
			
		}
		else
			cout << "������ �����ϴ�" << endl;
		break;
	}
	
}