#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0;
	int i = 0;
	int j = 0;
	int sum = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		j = j*10 + a;
		sum = sum + j;
    }
	printf("ºÍÎª%d\n", sum);
	system("pause");
	return 0;
}
