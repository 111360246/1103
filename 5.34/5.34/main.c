#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, i, s,d;
	printf("輸入兩個整數：");
	scanf_s("%d %d", &a, &i);
	d = a;
	for (int u = 1; u < i; u++)
	{
		s = a * d;
		a = s;
	}
	printf("%d的%d次方是：%d",d,i,a);
}