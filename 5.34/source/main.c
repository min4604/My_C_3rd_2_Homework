#include<stdio.h>
#include<stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int number1, number2, number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maximum is : %d\n", maximum(number1, number2, number3));
	system("pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int maxx = x;
	if (y > maxx)
	{
		maxx = y;
	}
	if (z > maxx)
	{
		maxx = z;
	}
	return maxx;
}