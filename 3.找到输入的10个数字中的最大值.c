#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//׼��һ�����鲢������
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}

	//������ĵ�һλ��ʼ���αȽϣ��ҳ����ֵ
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