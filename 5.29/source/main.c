#include<stdio.h>
#include<stdlib.h>

int LMC(int a, int b);
int GCD(int a, int b);

int main(void)
{
	int num1, num2;
	printf("块ㄢ计―程そ计(LCM):");
	scanf_s("%d %d", &num1, &num2);
	printf("程そ计:%d\n", LMC(num1, num2));
	system("pause");
	return 0;
}


int GCD(int a, int b)
{
	if (b == 0)
		return a;
	else
		return GCD(b, a%b);
}

int LMC(int a, int b)
{
	return a * b / GCD(a, b);
}