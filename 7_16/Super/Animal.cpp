#include "Animal.h"
#include "Bird.h"
#include "Cat.h"
#include "Dog.h"

Animal::Animal()
{
	cout << "Animal ȣ��" << endl;
}
Animal::~Animal()
{
	cout << "�Ҹ��� ȣ��" << endl;
}

void Animal::Print_Bird()
{
	cout << "Bird ȣ�� �Դϴ�(���)" << endl;
}
void Animal::Print_Cat()
{
	cout << "Cat ȣ�� �Դϴ�(���)" << endl;
}
void Animal::Print_Dog()
{
	cout << "Dog ȣ�� �Դϴ�(���)" << endl;
}

Bird::Bird()
{
	cout << "Bird ȣ��" << endl;
}
Bird::~Bird()
{
	cout << "�Ҹ��� ȣ��" << endl;
}

Cat::Cat()
{
	cout << "Cat ȣ��" << endl;
}
Cat::~Cat()
{
	cout << "�Ҹ��� ȣ��" << endl;
}


Dog::Dog()
{
	cout << "Dog ȣ��" << endl;
}
Dog::~Dog()
{
	cout << "�Ҹ��� ȣ��" << endl;
}