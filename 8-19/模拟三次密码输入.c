#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
	int password = 135246;
	int i,flag,sum,m,n;
	for (flag = 0, sum = 1; sum <= 3 && flag == 0; sum++)
	{
		printf("���������룺");
		scanf("%d", &m);
		n = 3 - sum;
		if (m == password)
		{
			flag = 1;
			break;
		}
		
		else
		{
			if (n == 0)
				break;
			printf("��������㻹��%d�λ���\n",n);
			
		}
	}
	if (flag == 1)
		printf("��¼�ɹ�\n");
	else
		printf("����ȫ���������ϵͳ���˳�\n");
    system("pause");
	return 0;
}