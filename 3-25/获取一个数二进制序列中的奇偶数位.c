#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[32] = { 0 };
	int i = 0;
	int m = 0;
	int count = 0;
	printf("������һ��ʮ��������");
	scanf("%d", &m);
	for (i = 0; m != 0; i++)
	{
		arr[i] = m % 2;
		m = m / 2;//��ʮ����ת��Ϊ������
		count=i+1;
	}
	for (; count < 32; count++)
	{
		arr[count] = 0;
	}
	printf("����λΪ��");
	for (i = 31; i >= 0; i -= 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("ż��λΪ��");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}