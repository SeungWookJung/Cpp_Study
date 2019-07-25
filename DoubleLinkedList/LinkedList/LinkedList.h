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
	Node* m_header;	// 처음을 가르키는 노드
	Node* m_end; //끝을 가르키는 노드
	int		m_length;	// 리스트의 길이
};