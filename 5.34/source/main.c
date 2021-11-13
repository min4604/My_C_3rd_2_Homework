#include<stdio.h>
#include<stdlib.h>

int power(int base, int exponent);

int main(void)
{
	int exp;
	int base;
	printf("Enter three base and exponent:");
	scanf_s("%d %d",&base,&exp);
	printf("%d^%d=%d\n",base,exp,power(base,exp));
	system("pause");
	return 0;
}

int power(int base, int exponent)
{
	if (exponent == 0)
		return 1;
	else if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}