#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//第二种方法
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
	//找100到200之间的素数
	for (i = 101; i <= 200; i += 2)
	{
		//判断i是否为素数
		int j = 0;
		int flag = 1;
		//素数就是不能被除了1和他自身之外的其他任何数整除。
		//sqrt开平方，也就是根号
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

		//第二种方法
		 if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}


	}
	printf("\ncount=%d\n", count);

	return 0;
}