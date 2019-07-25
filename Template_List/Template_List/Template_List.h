#pragma once
#include <iostream>

using namespace std;

template<typename T>
struct Node
{
	T num;
	Node* next;
};

template<typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void Clear();

public:
	void PushBack(T num);


	void Print();

	int Size();

private:
	Node<T>* m_header;	// ó���� ����Ű�� ���
	Node<T>* m_end; //���� ����Ű�� ���
	int		m_length;	// ����Ʈ�� ����
};

template<typename T>
LinkedList<T>::LinkedList()
	:m_header(nullptr)
	, m_end(nullptr)
	, m_length(0)
{
}

template<typename T>
LinkedList<T>::~LinkedList()
{

}

template<typename T>
void LinkedList<T>::PushBack(T num)
{
	if (m_header == nullptr) //����Ʈ�� �� ���
	{
		Node<T>* temp = nullptr;
		temp = new Node<T>;


		temp->num = num;
		temp->next = nullptr;

		m_header = temp;
		m_length++;

	}
	else if (m_length > 0) //����Ʈ�� ������� ���� ���
	{
		Node<T>* iter = nullptr;
		Node<T>* temp = new Node<T>;

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

template<typename T>
int LinkedList<T>::Size()
{
	return this->m_length;
}

template<typename T>
void LinkedList<T>::Clear()
{
	m_header = nullptr;
	m_end = nullptr;
	m_length = 0;
}

template<typename T>
void LinkedList<T>::Print()
{
	Node<T>* iter = nullptr;

	iter = m_header;

	while (iter != nullptr)
	{
		cout << iter->num << endl;
		iter = iter->next;
	}
}