#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)//��λ�룺�κ�����1��λ�룬���λ�����1����λ������λΪ1����֮Ϊ0
			count++;//������32������λ����1��λ�������ƣ��Ϳ���ͳ�Ƴ�����1�ĸ���
	}
	printf("1�ĸ���Ϊ��%d\n", count);
	return count;
}
int main()
{
	int n = 0;
	printf("������һ����������");
	scanf("%d", &n);
	count_one_bits(n);
	return 0;
}