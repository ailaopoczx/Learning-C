#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int jump(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
		return jump(n - 1) + jump(n - 2);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int set = jump(num);
	printf("jump(%d)=%d\n", num, set);

	return 0;
}