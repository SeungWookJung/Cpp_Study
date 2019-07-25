#pragma once
#include "Node.h"

class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	LinkedList(const LinkedList& indata);
	LinkedList& operator=(const LinkedList& indata);

	void Clear();

public:
	void PushBack(int num);
	void Insert(int index, int num);
	void Modify(int index, int num);
	void Delete(int index);

	void Print();
	void Print(int index);

	int Size();

private:
	Node* m_header;	// ó���� ����Ű�� ���
	Node* m_end; //���� ����Ű�� ���
	int		m_length;	// ����Ʈ�� ����
};