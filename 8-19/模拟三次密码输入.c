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
		printf("请输入密码：");
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
			printf("密码错误，你还有%d次机会\n",n);
			
		}
	}
	if (flag == 1)
		printf("登录成功\n");
	else
		printf("三次全部输入错误，系统将退出\n");
    system("pause");
	return 0;
}