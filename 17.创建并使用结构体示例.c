#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//结构体创建参数
struct stu
{
	char name[20];
	int age;
	double score;
};

//使用结构体，添加元素进去
void set_stu(struct stu* ps)
{
	//1.点操作符作用于结构体对象.成员
	/*strcpy((*ps).name, "zhangzhaopu");
	(*ps).age = 22;
	(*ps).score = 180;*/
	                                        // ps->age  完全等价于  (*ps).age
	//2.箭头操作符只能用于指针变量
	strcpy(ps->name, "张诏普");
	ps->age = 22;
	ps->score = 180;

}

//输出结构体
void print_stu(struct stu* ps)
{
	printf("name(姓名) = %s\nage(年龄) = %d\nscore(身高) = %2f\n", ps->name, ps->age, ps->score);
}


int main()
{
	//创建并初始化结构体
	struct stu s = { 0 };

	//
	set_stu(&s);
	print_stu(&s);

	return 0;
}