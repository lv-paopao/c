#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int t = 0;
	for (i = 0; i < 1000; i++)
	{
		j = i % 10;//��λ��
		k = (i/10) % 10;//ʮλ��
		t = i / 100;//��λ��
		if (i == j * j* j+ k * k* k+ t* t* t)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}
