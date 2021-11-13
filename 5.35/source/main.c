#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("計算第n個費氏數列 N:");
	scanf_s("%u", &n);
	printf("第%u個:%I64u\n", n, fibonacci(n));
	printf("能計算之最大費氏數列N=");
	printf("\n值為:%I64u",fibonacci(UINT_MAX));
	
	printf("\n");
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	unsigned long long int d1 = 0;
	unsigned long long int d2 = 1;
	unsigned long long int ram;
	
	for (unsigned int i = 2; i < n; i++)
	{
		ram = d1 + d2;
		d1 = d2;
		d2 = ram;
		
		if (d1 > d2)
		{
			printf("%u", i);
			break;
		}
	}
	if (n == 1)
		return d1;
	else if (n == 2)
		return d2;
	else
		return ram;
}