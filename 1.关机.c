#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 60");
again:
	printf("����һ���������룺������  ������һ���Ӻ�ػ�.:>\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}