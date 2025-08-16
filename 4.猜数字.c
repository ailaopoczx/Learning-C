#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****0.退出程序*****\n");
	printf("********************\n");
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了。\n");
		}
		else if (guess < ret)
		{
			printf("猜小了。\n");
		}
		else
		{
			printf("猜对了！就是%d\n", guess);
			break;
		}
	}
}


int main ()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("再见\n");
			break;
		default:
			printf("出错了，请重新选择\n");
			break;
		}
	} while (input);

	return 0;
}