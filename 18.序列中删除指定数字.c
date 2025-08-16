#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//接受元素的个数
	int n = 0;
	scanf("%d", &n);
	//创建一组元素并初始化
	int arr[50];
	//接收一组元素
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//接收删除的元素
	int del = 0;
	scanf("%d", &del);
	//删除指定的元素
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	//打印剩余元素
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}