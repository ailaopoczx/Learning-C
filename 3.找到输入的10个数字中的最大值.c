#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//准备一个数组并且输入
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//从数组的第一位开始依次比较，找出最大值
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);

	return 0;
}