#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1;
	int b = 2;
	a = a ^ b;//1.
	b = a ^ b;//2.
	a = a ^ b;//3.
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}
//异或运算符^：按二进制位异或,相同为0，相异为1。（只能用于整形）
//1. 0 1 0 (原a)
//  ^1 0 0 (原b)
//   1 1 0 (异或后的a)
//2. 1 1 0 (异或后的a成为新的a)
//  ^1 0 0 (原b)
//   0 1 0 (异或后的b成为新的b,二进制与原a相同，说明将原a的值赋予了b)
//3. 1 1 0 (新的a)
//  ^0 1 0 (新的b)
//   1 0 0 (异或后的新a,二进制与原b相同，说明将原b的值赋予了a)