#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ch = 0;
	//%cǰ���һ���ո�������һ���ַ�֮ǰ�����еĿհ��ַ���Ҳ����ȥ��\n
	while (scanf(" %c", &ch) == 1)
	{
		//��һ�ַ���
		if (ch >= 'a' && ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}

		//�ڶ��ַ���
		if (islower(ch))
		{
			printf("%c\n", toupper(ch));
		}
		else if (isupper(ch))
		{
			printf("%c\n", tolower(ch));
		}

		//getcharȡһλ������ȥ��\n
		getchar();
	}
	return 0;
}