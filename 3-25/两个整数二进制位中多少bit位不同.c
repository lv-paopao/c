#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("�������������Ͳ�����m��n��");
	scanf("%d %d", &m, &n);
	int arr1[32] = {0};
	int arr2[32] = {0};
	for (i = 31; m != 0; i--)
	{
		arr1[i] = m % 2;
		m = m / 2;
	}
	for (i = 31; n != 0; i--)
	{
		arr2[i] = n % 2;
		n = n / 2;
	}
	printf("m�Ķ�����Ϊ��");
	for (i = 0; i < 32 ; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("n�Ķ�����λ��");
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	for (i = 0; i < 32; i++)
	{
		if (arr1[i] != arr2[i])
		{
			count++;
		}
	}
	printf("����%d��bitλ��ͬ\n", count);
	return 0;
}