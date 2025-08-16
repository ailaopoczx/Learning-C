#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch = 0;
	//%c前面加一个空格，跳过下一个字符之前的所有的空白字符，也用于去除\n
	while (scanf(" %c", &ch) == 1)
	{
		//第一种方法
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}

		//第二种方法
		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
		else if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}

		//getchar取一位，用于去除\n
		getchar();
	}
	return 0;
}