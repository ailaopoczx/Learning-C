#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ�����Ķ����������ж��ٸ�1
 
//��һ�ַ�����ͨ������λ����λ��������
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &i);
	//����λ���ְ�λ��1���õ��Ľ�������1��ô�Ƕ��������һλΪ1
	for(j = 0; j < 32; j++)
	{
		if (i & 1 == 1)
		{
			count++;
		}
		i = i >> 1;
	}
	printf("%d", count);

	return 0;
}


//�ڶ��ַ�����ͨ��%2./2������
int count_num_of_1(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n /= 2;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int n = count_num_of_1(num);
	printf("%d\n", n);
	return 0;
}


//�����ַ�����n = n&��n-�� ÿ�μ��㶼��ʹn�Ķ��������ұߵ�1��ʧ
int ccount_num_of_1(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int m = ccount_num_of_1(num);
	printf("%d", m);
	return 0;
}