#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 2;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}