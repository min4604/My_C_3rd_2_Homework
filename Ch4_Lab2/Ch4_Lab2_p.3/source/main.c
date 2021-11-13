#include<stdio.h>
#include<stdlib.h>

int inverse(int*);

void main()
{
	int x = 100;
	int y = inverse(&x);
	printf("x=%d\n", x);
	system("pause");
}

int inverse (int* xptr)
{
	(*xptr)++;
	printf("*xptr=%d\n", *xptr);
	return *xptr;
}