#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//计算一个数的二进制里面有多少个1
 
//第一种方法，通过右移位。按位与来计算
int main()
{
	int j = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &i);
	//让这位数字按位与1。得到的结果如果是1那么是二进制最后一位为1
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


//第二种方法：通过%2./2来计算
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


//第三种方法：n = n&（n-） 每次计算都会使n的二进制最右边的1消失
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