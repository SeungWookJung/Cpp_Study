#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

DoubleLinkedList::DoubleLinkedList()
	:m_header(nullptr)
	, m_length(0)
{
}
DoubleLinkedList::~DoubleLinkedList()
{

}

void DoubleLinkedList::PushBack(int num)
{
	if (m_header == nullptr) //리스트가 빈 경우
	{
		Node* temp = nullptr;
		temp = new Node;


		temp->num = num;
		temp->next = nullptr;

		m_header = temp;
		m_length++;

	}
	else if (m_length > 0) //리스트가 비어있지 않은 경우
	{
		Node* iter = nullptr;
		Node* temp = new Node;

		temp->num = num;
		temp->next = nullptr;

		iter = m_header;

		while (1)
		{
			if (iter->next == nullptr)
			{
				iter->next = temp;
				m_length++;
				break;
			}

			iter = iter->next;
		}
	}
}

void DoubleLinkedList::Clear()
{
	m_header = nullptr;
	m_length = 0;
}
void DoubleLinkedList::Print()
{
	Node* iter = nullptr;

	iter = m_header;

	while (iter->next != nullptr)
	{
		cout << iter->num << endl;
		iter = iter->next;
	}
}

void DoubleLinkedList::Print(int index)
{
	Node* iter = nullptr;
	iter = m_header;
	int count = 1;

	while (1)
	{
		if (count == index)
		{
			cout << iter->num << endl;
			break;
		}
		iter = iter->next;
		++count;
	}
}