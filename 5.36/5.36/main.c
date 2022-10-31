#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int s;
	printf("輸入何內塔次數：");
	scanf_s("%d", &s);
	printf("共需要搬運%.2f次\n", pow(2, s)-1);
	system("pause");
	return 0;
}