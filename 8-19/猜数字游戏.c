#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int a ,flag,sum,n;
	srand((int)time(NULL));//生成随机种子数
	a = rand() % 100 + 1;//生成0-10之间的随机整数
	for (flag = 0, sum = 1; sum <= 3 && flag == 0; sum++)
	{
		printf("请输入你猜的数：");
		scanf("%d", &n);
		if (n == a)
		{
			flag = 1;
			break;
		}
		if (n > a)
		{
			printf("猜大了，继续猜一下吧！\n");
		}
		else
		{
			printf("猜小了，继续努力呀！\n");
		}
	}
		if (flag == 1)
			printf("恭喜你，猜对啦！\n");
		else
			printf("三次结束，很遗憾，你没有猜对...\n");
	
	system("pause");
	return 0;
}