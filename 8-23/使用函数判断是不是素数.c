#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int x)
{
	int k = sqrt(x);
	int i = 0;
	for (i = 2; i <= k;i++)
	if (x%i == 0)
		break;
	if (i > k)
		return 1;
	else
		return 0;
}
int main()
{
	int i = 0;
	printf("������Ҫ�жϵ����֣�");
	scanf("%d", &i);
	if (is_prime(i) == 1)
	{
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}