#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//�ṹ�崴������
struct stu
{
	char name[20];
	int age;
	double score;
};

//ʹ�ýṹ�壬���Ԫ�ؽ�ȥ
void set_stu(struct stu* ps)
{
	//1.������������ڽṹ�����.��Ա
	/*strcpy((*ps).name, "zhangzhaopu");
	(*ps).age = 22;
	(*ps).score = 180;*/
	                                        // ps->age  ��ȫ�ȼ���  (*ps).age
	//2.��ͷ������ֻ������ָ�����
	strcpy(ps->name, "��گ��");
	ps->age = 22;
	ps->score = 180;

}

//����ṹ��
void print_stu(struct stu* ps)
{
	printf("name(����) = %s\nage(����) = %d\nscore(���) = %2f\n", ps->name, ps->age, ps->score);
}


int main()
{
	//��������ʼ���ṹ��
	struct stu s = { 0 };

	//
	set_stu(&s);
	print_stu(&s);

	return 0;
}