#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a1, a2;
	printf("輸入一個大小寫英文字：");
	scanf_s("%c", &a1);
	if (a1>='a' && a1<='z')
	{
		a2 = a1 - 32;
		printf( "大寫 %c", a2);
	}
	else if (a1 >= 'A' && a1 <= 'Z')
	{
		  a2 = a1 + 32;
		  printf("小寫 %c", a2);
	}

}