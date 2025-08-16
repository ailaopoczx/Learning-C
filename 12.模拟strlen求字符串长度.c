#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.循环来模拟strlen
int my_strlen(char* n)
{
	int count = 0;
	while (*n != '\0')
	{
		count++;
		*n++;
	}
	return count;
}


//2.递归来模拟strlen
int my_strlen(char* n)
{
	if (*n != '\0')
	{
		n++;
		return 1 + my_strlen(n);
	}
	else
		return 0;
 }


//3.通过指针来求字符串长度
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return (str - start);
}


#include<assert.h>
//4.指针模拟strlen
int my_strlen(const char* str)
{
	int count = 0;
	assert(str);
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}


int main()
{
	char str[] = "abcdefg";
	int len = my_strlen(str);
	printf("%d\n", len);

	return 0;
}