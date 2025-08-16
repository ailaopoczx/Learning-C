#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//通过指针实现伪二维数组
int main()
{
	//创建三个一维数组
	int arr1[] = { 1,2,3,4 };
	int arr2[] = { 2,3,4,5 };
	int arr3[] = { 3,4,5,6 };

	//将数组作为参数存放到指针数组里面
	int* parr[] = { arr1,arr2,arr3 };

	//将三个数组依次打印出来，打印\n
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", parr[i][j]);
		}
		printf("\n");
	}
	return 0;
}