#include<stdio.h>
#include<stdlib.h>

unsigned long long int fibonacci(unsigned int n);

int main(void)
{
	unsigned int n;
	printf("�p���n�ӶO��ƦC N:");
	scanf_s("%u", &n);
	printf("��%u��:%I64u\n", n, fibonacci(n));
	printf("��p�⤧�̤j�O��ƦCN=");
	printf("\n�Ȭ�:%I64u",fibonacci(UINT_MAX));
	
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