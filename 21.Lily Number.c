#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//
//  如果一个数从中间拆分成两个数字比如1461可以拆分成
//（1和461），（14和61），（164和1）。如果所有拆分后
//的乘积之和等于自身，则是一个Lily Number
//例如：
//655=8 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//

int main()
{
	int j = 0;
	for (j = 10000; j <= 99999; j++)
	{
		int num = 0;
		int k = 0;
		//判断是不是LilyNumber
		for (k = 1; k <= 4; k++)
		{
			int i = pow(10, k);
			num += (j / i) * (j % i);
		}
		if (num == j)
		{
			printf("%d ", j);
		}
		
	}

	return 0;
}