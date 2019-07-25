#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList()
	:m_header(nullptr)
	, m_end(nullptr)
	, m_length(0)
{
}

LinkedList::LinkedList(const LinkedList& indata)
{
	Node* temp = m_header;
}

//LinkedList& operator=(const LinkedList& indata)
//{

//}

LinkedList::~LinkedList()
{

}

void LinkedList::PushBack(int num)
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

int LinkedList::Size()
{
	return this->m_length;
}

void LinkedList::Clear()
{
	m_header = nullptr;
	m_end = nullptr;
	m_length = 0;
}
void LinkedList::Print()
{
	Node* iter = nullptr;

	iter = m_header;

	while (iter->next != nullptr)
	{
		cout << iter->num << endl;
		iter = iter->next;
	}
}

void LinkedList::Print(int index)
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