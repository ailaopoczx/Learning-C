#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	//����Ԫ�صĸ���
	int n = 0;
	scanf("%d", &n);
	//����һ��Ԫ�ز���ʼ��
	int arr[50];
	//����һ��Ԫ��
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����ɾ����Ԫ��
	int del = 0;
	scanf("%d", &del);
	//ɾ��ָ����Ԫ��
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j++] = arr[i];
		}
	}
	//��ӡʣ��Ԫ��
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}