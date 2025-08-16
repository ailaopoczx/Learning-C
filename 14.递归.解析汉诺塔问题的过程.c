#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_recursion(int n, char pole1, char pole2, char pole3)
{
	if (n == 1)
	{
		//当递归到n为1的时候，直接表示将A挪到C
		printf("%c to %c\n", pole1, pole3);
	}
	else
	{
		//第一步，将n-1数量的圆盘从A挪到B，以C为辅助
		my_recursion(n - 1, pole1, pole3, pole2);
		
		//第二步，将最后一个圆盘从A挪到C
		printf("%c to %C\n", pole1, pole3);
 
		//第三步，将B的n-1数量的圆盘挪到C，以A为辅助
		my_recursion(n - 1, pole2, pole1, pole3);
	}
}
int main()
{
	int num = 0;
 //输入汉诺塔有多少层数
	scanf("%d", &num);
 //将数量带入函数，柱ABC用字符串分别代替
	my_recursion(num, 'A', 'B', 'C');
 
	return 0;
}