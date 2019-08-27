#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void reverse_string(char * string)
{
	if (*string != '\0')
	{
		string++;
		reverse_string(string);
		printf("%c", *(string - 1));
	}
}
int main()
{
	char arr[] = "abcde";
	reverse_string(arr);
	printf("\n");
	system("pause");
	return 0;
}