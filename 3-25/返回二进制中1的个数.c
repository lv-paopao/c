#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int count_one_bits(unsigned int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((value >> i) & 1) == 1)//按位与：任何数与1按位与，最低位如果是1，则按位结果最低位为1，反之为0
			count++;//整型有32个比特位，和1按位与再右移，就可以统计出所有1的个数
	}
	printf("1的个数为：%d\n", count);
	return count;
}
int main()
{
	int n = 0;
	printf("请输入一个操作数：");
	scanf("%d", &n);
	count_one_bits(n);
	return 0;
}