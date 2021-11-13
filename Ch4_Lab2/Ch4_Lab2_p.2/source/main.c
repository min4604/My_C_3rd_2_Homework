#include<stdio.h>
#include<stdlib.h>

int addbyone(int x);

void main()
{
	int x = 100;
	int y = addbyone(x);
	printf("x=%d\n", x);
	system("pause");
}

int addbyone(int x)
{
	x++;
	printf("x=%d\n", x);
	return x;
}