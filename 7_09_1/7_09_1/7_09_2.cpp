#include <iostream>

using namespace std;

struct Node
{
	int num;
	Node* front_p;
	Node* back_p;
};
struct Head
{
	Node* head;
};

int main()
{
	Node a, b, c;
	Head HEAD;

	HEAD.head = &a;
	
	a.num = 1;
	b.num = 2;
	c.num = 3;

	a.back_p = &b;
	b.back_p = &c;
	c.back_p = nullptr;

	a.front_p = nullptr;
	b.front_p = &a;
	c.front_p = &b;

	cout << "a : " << a.num << endl;
	cout << "b : " << a.back_p->num << endl;
	cout << "c : " << b.back_p->num << endl;
	cout << "c�� �� : " << c.back_p <<"\n"<< endl;

	b.front_p = nullptr;
	b.back_p = nullptr;

	a.back_p = &c;
	c.front_p = &a;

	cout << "c �� front :  " << c.front_p->num << endl;
	cout << "a�� back : " << a.back_p->num << endl;

	return 0;
}