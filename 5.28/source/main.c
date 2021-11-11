#include<stdio.h>
#include<stdlib.h>



char  tolower(char y);

int main(void)
{
	char text;
	printf("請輸入一個英文:");
	scanf_s("%c",&text);
	
	
	printf("%c",tolower(text));
	
	printf("\n%d",text );
	system("pause");
	return 0;
	
	
}

char  tolower(char y)
{
	char c;
	if (y >= 'a' && y <= 'z')
	{
		c = (y - 32);
		return c;
	}
	else if (y >= 'A' && y <= 'Z')
	{
		c = (y + 32);
		return c;
	}
	else
	{
		return y;
	}
}