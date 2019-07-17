#pragma once

template<typename T>
class PosList
{
public:
	PosList(int arrlen = 100);
	~PosList();
	bool SetPos(int index, T pos);
	bool GetPos(int index, T& pos);

private:
	T* m_pArray;
	int m_nArrLen;
};