#pragma once

//��ǥ��(x,y)
class Point
{
public:  //������

	//����Ʈ ������
	Point();
	//����Ʈ �Ҹ���
	~Point();

	Point(int x, int y);

	void ShowPoint();

	int GetX()
	{
		return mx;
	}
	int GetY()
	{
		return my;
	}
	void SetX(int x)
	{
		this->mx = x;
	}
	void SetY(int y)
	{
		this->my = y;
	}


protected: //��ȣ��

private: //��� (��� ������ ��������)

	int mx, my; 
};