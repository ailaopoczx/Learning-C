#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void reverse(char* str)
{
	int tmp = *str;
	int len = strlen(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (strlen(str) >= 2)
	{
		reverse(str + 1);
	}
	*(str + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdefg";
	reverse(arr);
	printf("%s", arr);
	return 0;
}

//创建新的参数，第二种方法
void reverse(char arr[], int left, int right)
{
	if (left <= right - 1)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		reverse(arr, left+1, right-1);
	}
}

int main()
{
	char arr[] = "abcdef";
	int left = 0;
	int right = strlen(arr) - 1;
	reverse(arr, left, right);
	printf("%s\n", arr);
	return 0;
}