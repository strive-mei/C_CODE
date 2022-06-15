#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////定义一个结构体类型；
//
//typedef struct Stu
//	//struct：结构体关键字
//	//stu:结构体标签；
//	//struct Stu:结构体类型；
//{
//	char name[20];//结构体stu里面的第一个成员变量是name，它是字符型数据；
//	int age;//结构体stu里面的第2个成员变量是age,是整型，代表学生年龄
//	char sex[5];//结构体stu里面的第3个成员变量是sex,是字符串，代表学生性别
//	char id[20];//结构体stu里面的第4个成员变量是id,是字符串，代表学生学号
//}Stu;
//struct T
//{
//	int a;
//	struct Stu s1;//结构体T，中的结构体变量有s1
//	char* p;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	//struct Stu s;//创建结构体局部变量：s
//	Stu s1 = {"张三",20,"男","1243454"};//重新被命名为Stu的结构体类型，可以直接用stu来创建相应的结构体变量；
//	struct Stu s2 = { "李四",21,"男","1433543" };//也可以用原来的结构体类型名：struct Stu;
//	struct T t1 = { 12,s1,arr };
//	//打印结构体中的变量；
//	printf("%d\n", t1.a);//打印的是结构体T中的t1变量中的第一个变量a;
//	printf("%s\n", t1.s1.name);//打印的是结构体T中的t1变量中的第2个变量struct Stu s;;
//	printf("%s\n", t1.p);//打印的是结构体T中的t1变量中的第3个变量char* p;;
//	return 0;
//}

//代码2:函数里面调用结构体变量
typedef struct Stu
{
	//结构体struct Stu中的成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//加了typedef就是将struct Stu重新命名，命名为Stu;
void print1(Stu tmp)
{
	printf("%s\n", tmp.name);//打印结构体tmp中的name成员的信息；

}
void print2(Stu* tmp)
{
	printf("%s\n",tmp->name);
	printf("%d\n", tmp->age);
	printf("%s\n", tmp->tele);
	printf("%s\n", tmp->sex);
}
int main()
{
	//Stu就相当于是数据类型，s1是该数据类型下的数据变量
	//s1：可以存储结构体中的成员的信息
	Stu s1 = { "张三",43,"13383903456","男" };
	print1(s1);//编写一个自定义函数：传递这个结构体变量s1
	//这个结构体的变量类型是Stu;
	print2(&s1);
	system("pause");//用来暂停程序的编译页面的；
	return 0;
}
