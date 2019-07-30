#include <stdio.h>


int CountFunc()
{
	static int countFunc = 0;
	countFunc++;


	return countFunc;
}

int main()
{
	int num;
	int count;
	printf("%d", &num);
	return 0;
}