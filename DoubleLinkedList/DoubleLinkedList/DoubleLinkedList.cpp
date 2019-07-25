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
		temp->prev = nullptr;

		m_header = temp;
		m_length++;

	}
	else if (m_length > 0) //리스트가 비어있지 않은 경우
	{
		Node* iter = nullptr;
		Node* temp = new Node;

		iter = m_header;


		while (1)
		{
			if (iter->next == nullptr)
			{
				iter->next = temp;
				temp->prev = iter;

				temp->next = nullptr;
				temp->num = num;

				m_length++;
				break;
			}

			iter = iter->next;
		}
	}
}

void DoubleLinkedList::Clear()
{
	Node* iter = m_header;

	cout << "Clear" << endl;

	while (iter->next != nullptr)  //iter 는 검색용 target은 iter 전 노드를 가르키고 삭제
	{
		Node* target = iter;

		iter = iter->next;

		m_header = iter;

		delete target;
		target = nullptr;

		m_length--;
	}
	m_header = nullptr;
	cout << "clear 종료" << endl;
}
void DoubleLinkedList::Print()
{
	if (m_header == nullptr)
	{
		cout << "데이터가 없습니다." << endl;
		return;
	}

	for(Node* iter = m_header;iter != nullptr;iter=iter->next)
		cout << iter->num << " ";
		
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

void DoubleLinkedList::Insert(int index, int num)
{
	int count = 0;
	if (m_length > 0)
	{
		for (Node* iter = m_header; iter != nullptr; iter = iter->next)
		{
			if (count == index)
			{
				if (count == 1) //제일앞에 추가할 때
				{
					Node* temp;

					temp->next = iter;

					m_header = temp;

					temp->num = num;
					temp->prev = nullptr;
				}
				else if (count == m_length) //끝에 추가 할때
				{
					Node* temp;

					temp->prev = iter;
					temp->num = num;
					temp->next = nullptr;

				}
				else if (count > m_length) //중간에 추가할때
				{
					Node* temp;

					temp->num = num;

					temp->next = iter->next;
					temp->prev = iter;
				}

				m_length++;
				break;
			}
			count++;
		}
	}
	else
	{
		Node* temp = nullptr;
		temp = new Node;


		temp->num = num;
		temp->next = nullptr;
		temp->prev = nullptr;

		m_header = temp;
		m_length++;
	}
}

void DoubleLinkedList::Delete(int index)
{
	int count = 0;
	for (Node* iter = m_header; iter != nullptr; iter = iter->next)
	{
		if (m_length > 0)
		{
			if (count == index)
			{
				if (count == 1) //제일앞에 삭제할 때
				{
					Node* temp;

					temp->next = iter;

					m_header = temp;

					temp->num = num;
					temp->prev = nullptr;
				}
				else if (count == m_length) //끝에 추가 할때
				{
					Node* temp;

					temp->prev = iter;
					temp->num = num;
					temp->next = nullptr;

				}
				else if (count > m_length) //중간에 추가할때
				{
					Node* temp;

					temp->num = num;

					temp->next = iter->next;
					temp->prev = iter;
				}

				m_length--;
				break;
			}
			count++;
		}
		else
			cout << "삭제 할 노드가 없습니다." << endl;
		break;
	}
}