#pragma once

#include "Node.h"


class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void Clear();

public:
	void PushBack(int num);
	///void Insert();
	///void Modify();
	///void Delete(int index);

	void Print();
	void Print(int index);

	int Size();

private:
	Node* m_header;	// ó���� ����Ű�� ���
	Node* m_end; //���� ����Ű�� ���
	int		m_length;	// ����Ʈ�� ����
};