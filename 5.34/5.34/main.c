#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, i, s,d;
	printf("��J��Ӿ�ơG");
	scanf_s("%d %d", &a, &i);
	d = a;
	for (int u = 1; u < i; u++)
	{
		s = a * d;
		a = s;
	}
	printf("%d��%d����O�G%d",d,i,a);
}