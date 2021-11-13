#include<stdio.h>
#include<stdlib.h>

void Hanoi(int n, int first, int end, int save);
int main(void)
{
	int n, first, end, save;
	printf("�п�J ��L�Ӽ� ��l��m(1 or 2 or 3) ������m(1 or 2 or 3) �Ȧs�Ϧ�m(1 or 2 or 3) : ");
	scanf_s("%d %d %d %d", &n, &first, &end, &save);
	Hanoi(n, first, end, save);
	system("pause");
	return 0;
}

void Hanoi(int n, int first, int end, int save)
{
	
	if (n == 1)
	{
		printf("%d ---> %d\n", first, end);
		return;
	}
	Hanoi(n - 1, first, save, end);
	printf("%d ---> %d\n", first, end);
	Hanoi(n - 1, save, end,first );
}