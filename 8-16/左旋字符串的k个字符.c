#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
暴力移位法
void rotate(char* str,int sz,int k)
{
	assert(str!=NULL);
	int i = 0;
	k %= sz;//每经过字符串长度-1次左旋后，就会变成最初的字符串，以此进行循环
	while (k)
	{
		char tmp = str[0];//提取出第一个字符
		for (i = 0; i < sz-1;i++)
		{
			str[i] = str[i + 1];//把后一个字符赋给当前字符
		}
		str[i-1] = tmp;//把循环前的首字符放到一次循环的最末尾
		k--;
	}
}
int main()
{
	char arr[] = "ABCDEF";
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("请输入操作数：");
	scanf("%d", &k);
	rotate(arr,sz,k);
	printf("%s\n", arr);

	return 0;
}

三次逆序法
a b c d e f(左旋两个)
b a|f e d c(先分别逆序前两个和后四个，再整体逆序)
c d e f a b
void reverse(char* left,char* right)
{
	assert(left && right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void rotate(char* str, int k)
{
	int len = strlen(str);
	k %= len;
	reverse(str, str + k - 1);
	reverse(str + k, str + len - 1);
	reverse(str, str + len - 1);
}
int main()
{
	char arr[] = "ABCDEF";
	int k = 0;
	printf("请输入操作数：");
	scanf("%d", &k);
	rotate(arr, k);
	printf("%s\n", arr);

	return 0;
}



