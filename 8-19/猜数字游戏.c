#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a ,flag,sum,n;
	srand((int)time(NULL));//�������������
	a = rand() % 100 + 1;//����0-10֮����������
	for (flag = 0, sum = 1; sum <= 3 && flag == 0; sum++)
	{
		printf("��������µ�����");
		scanf("%d", &n);
		if (n == a)
		{
			flag = 1;
			break;
		}
		if (n > a)
		{
			printf("�´��ˣ�������һ�°ɣ�\n");
		}
		else
		{
			printf("��С�ˣ�����Ŭ��ѽ��\n");
		}
	}
		if (flag == 1)
			printf("��ϲ�㣬�¶�����\n");
		else
			printf("���ν��������ź�����û�в¶�...\n");
	
	system("pause");
	return 0;
}