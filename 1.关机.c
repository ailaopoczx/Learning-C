#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 60");
again:
	printf("请在一分钟内输入：我是猪  否则将在一分钟后关机.:>\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}