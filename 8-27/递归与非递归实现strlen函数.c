#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

µÝ¹é
int my_strlen(char* string)
{
	int count = 0;
	if (*string != '\0')
	{
		string++;
		count=1 + my_strlen(string);
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n",my_strlen(arr));
	system("pause");
	return 0;
}

·ÇµÝ¹é
int my_strlen(char* string)
{
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
int main()
{
	char arr[] = "abcde";
	printf("%d\n", my_strlen(arr));
	system("pause");
	return 0;
}
