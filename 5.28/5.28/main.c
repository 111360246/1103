#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a1, a2;
	printf("��J�@�Ӥj�p�g�^��r�G");
	scanf_s("%c", &a1);
	if (a1>='a' && a1<='z')
	{
		a2 = a1 - 32;
		printf( "�j�g %c", a2);
	}
	else if (a1 >= 'A' && a1 <= 'Z')
	{
		  a2 = a1 + 32;
		  printf("�p�g %c", a2);
	}

}