#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//
//  ���һ�������м��ֳ��������ֱ���1461���Բ�ֳ�
//��1��461������14��61������164��1����������в�ֺ�
//�ĳ˻�֮�͵�����������һ��Lily Number
//���磺
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
		//�ж��ǲ���LilyNumber
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