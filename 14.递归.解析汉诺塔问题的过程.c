#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void my_recursion(int n, char pole1, char pole2, char pole3)
{
	if (n == 1)
	{
		//���ݹ鵽nΪ1��ʱ��ֱ�ӱ�ʾ��AŲ��C
		printf("%c to %c\n", pole1, pole3);
	}
	else
	{
		//��һ������n-1������Բ�̴�AŲ��B����CΪ����
		my_recursion(n - 1, pole1, pole3, pole2);
		
		//�ڶ����������һ��Բ�̴�AŲ��C
		printf("%c to %C\n", pole1, pole3);
 
		//����������B��n-1������Բ��Ų��C����AΪ����
		my_recursion(n - 1, pole2, pole1, pole3);
	}
}
int main()
{
	int num = 0;
 //���뺺ŵ���ж��ٲ���
	scanf("%d", &num);
 //���������뺯������ABC���ַ����ֱ����
	my_recursion(num, 'A', 'B', 'C');
 
	return 0;
}