#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//1.移位对比法
void rotate(char* str, int sz, int k)
{
	assert(str!=NULL);
	int i = 0;
	while (k)
	{
		char tmp = str[0];
		for (i = 0; i < sz - 1; i++)
		{
			str[i] = str[i + 1];
		}
		str[i - 1] = tmp;
		k--;
	}
}

int main()
{
	char a1[] = "AABCD";
	char a2[] = "ABCDA";
	int sz = sizeof(a1) / sizeof(a1[0]);
	int k = 0;
	int i = 0;
	for (k = 0; k < sz - 1; k++)//把a1左旋k(sz-1)个字符，和a2做对比
	{
		rotate(a1, sz, k);
		for (i = 0; i < sz; i++)
		{
			if (a1[i] == a2[i])
			{
				printf("move\n");
				return 1;
			}
			else
				printf("not remove\n");
			return 0;
				
		}
	}
}

//2.追加对比法
//a b c d e f
//a b c d e f a b c d e f(在后面追加一遍自己，包含了字符串旋转后的所有可能性)
//在追加后的字符串里找是不是子字符串
int is_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
		return 0;
	strncat(str1, str1, len1);
	if (strstr(str1, str2) == NULL)
	    return 0;
	else
		return 1;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret=is_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}