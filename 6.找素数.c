#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//�ڶ��ַ���
int is_prime(int n)
{
	int m = 0;
	for (m = 2; m <= sqrt(n); m++)
	{
		if (n % m == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int i = 0;
	int count = 0;
	//��100��200֮�������
	for (i = 101; i <= 200; i += 2)
	{
		//�ж�i�Ƿ�Ϊ����
		int j = 0;
		int flag = 1;
		//�������ǲ��ܱ�����1��������֮��������κ���������
		//sqrt��ƽ����Ҳ���Ǹ���
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%d ", i);
		}

		//�ڶ��ַ���
		 if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}


	}
	printf("\ncount=%d\n", count);

	return 0;
}