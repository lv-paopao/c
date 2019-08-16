#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
������λ��
void rotate(char* str,int sz,int k)
{
	assert(str!=NULL);
	int i = 0;
	k %= sz;//ÿ�����ַ�������-1�������󣬾ͻ���������ַ������Դ˽���ѭ��
	while (k)
	{
		char tmp = str[0];//��ȡ����һ���ַ�
		for (i = 0; i < sz-1;i++)
		{
			str[i] = str[i + 1];//�Ѻ�һ���ַ�������ǰ�ַ�
		}
		str[i-1] = tmp;//��ѭ��ǰ�����ַ��ŵ�һ��ѭ������ĩβ
		k--;
	}
}
int main()
{
	char arr[] = "ABCDEF";
	int k = 0;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("�������������");
	scanf("%d", &k);
	rotate(arr,sz,k);
	printf("%s\n", arr);

	return 0;
}

��������
a b c d e f(��������)
b a|f e d c(�ȷֱ�����ǰ�����ͺ��ĸ�������������)
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
	printf("�������������");
	scanf("%d", &k);
	rotate(arr, k);
	printf("%s\n", arr);

	return 0;
}



