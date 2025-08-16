#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	//
	for (i = 0; i < sz-1; i++)
	{
		int j = 0;

		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	//创建无序数组
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 1, 2, 0 };

	//函数外找出数组元素数量并作为参数导入函数。
	//因为数组作为参数传入函数本质上传的是数组首元素的地址。
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);

	//依次打印排序好的数组元素
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}