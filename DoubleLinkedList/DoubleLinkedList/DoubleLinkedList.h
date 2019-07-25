#pragma once
#include "Node.h"

class DoubleLinkedList
{
public:
	DoubleLinkedList();
	~DoubleLinkedList();
	void Clear();

public:
	void PushBack(int num);
	void Insert(int index, int num);
	void Modify(int index, int num);
	void Delete(int index);

	void Print();
	void Print(int index);

	int Size() { return this->m_length; };

private:
	Node* m_header;	// ó���� ����Ű�� ���
	int		m_length;	// ����Ʈ�� ����
};