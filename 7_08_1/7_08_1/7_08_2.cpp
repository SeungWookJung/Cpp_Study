#include <iostream>
#include <Windows.h>
#include <string>


#define DWORD COLORREF
#define RGB(r,g,b) ((COLORREF)(((BYTE)(r) | ((WORD)((BYTE)(g))<<8)) | (((DWORD)(BYTE)(b))<<16)))
#define unsigned int uint;

using namespace std;


//rgb�� �Է¹޾ƻ� ����ϴ� �Լ��� ����� ������
int main()
{

	string strTemp;


	int R=0, G=0, B = 0;

	cout << "R G B���� �Է��ϼ���"<<endl;
	cout << "R �Է� : ";
	cin >> R;

	cout << "R �Է� : ";
	cin >> G;

	cout << "R �Է� : ";
	cin >> B;

	RGB(R, G, B);


	//typedef (����Ÿ��) (���ϴ� ���� Ÿ�Ը�)
	typedef unsigned int uint;

	return 0;
}
