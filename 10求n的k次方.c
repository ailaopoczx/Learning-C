#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double Pow(int n, int k)
{
	if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		1.0 / Pow(n, -k);
	}
}

int main()
{
	int k = 0;
	int n = 0;
	scanf("%d%d", &n, &k);
	double num = Pow(n, k);
	printf("%1f\n", num);
	return 0;
}