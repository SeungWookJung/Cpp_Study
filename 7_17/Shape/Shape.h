#pragma once

class Shape
{
public:
	Shape(char* name);
	virtual ~Shape();

public:
	virtual float GetPerimeter() = 0; //�ѷ�(����)
	virtual float GetArea() = 0; //����(����)
	virtual void Print() = 0;

protected:
	char* m_name;
};