#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, s, d,f,g;
	printf("��J��Ӿ�ƨD�̤p�����ơG");
	scanf_s("%d %d", &a,&s);
	f = a;
	g = s;
	while (s!=0)
	{
	d = a % s;
	a = s;
	s = d;
	}
	printf("LCD=%d\n", f * g / a);
	
}