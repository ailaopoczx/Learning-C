#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****0.�˳�����*****\n");
	printf("********************\n");
}

void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;

	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˡ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˡ�\n");
		}
		else
		{
			printf("�¶��ˣ�����%d\n", guess);
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�ټ�\n");
			break;
		default:
			printf("�����ˣ�������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}