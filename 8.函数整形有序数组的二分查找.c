#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int binary_search(int arr[], int k, int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	
		return -1;
	
}

int main()
{
	int arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;

	//找数组总数的变量不能放在函数里面。
	//因为函数传参传的是数组首位变量的地址，函数里的形参看上去是数组实际上是指针
	int sz = sizeof(arr) / sizeof(arr[0]);

	//找到返回下标；
	//找不到返回-1；
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到~~");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}

	return 0;
}