#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��һ�ַ���
int main()
{
	int i = 1;
	int n = 1;
	for (i = 1; i <= n; i++)
	{
		for (n = i; n < 10; n++)
		{
			printf("%d*%d=%2d ", i, n, i * n);
		}
		printf("\n");
	}
	return 0;
}


//�ڶ��ַ���
int main()
{
	int i = 1;
	int n = 1;
	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= i; n++)
		{
			printf("%d*%d=%2d ", i, n, i * n);
		}
		printf("\n");
	}
	return 0;
}