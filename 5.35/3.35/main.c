#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, s=0,d=1,f;
	printf("¿é¤J²ÄN¯Å¡G");
	scanf_s("%d", &a);
	printf("0 1");
	for (int i = 0; i < (a-2); i++)
	{
		f = s + d;
		printf(" %d", f);
		s = d;
		d = f;
	}
}