#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
////����һ���ṹ�����ͣ�
//
//typedef struct Stu
//	//struct���ṹ��ؼ���
//	//stu:�ṹ���ǩ��
//	//struct Stu:�ṹ�����ͣ�
//{
//	char name[20];//�ṹ��stu����ĵ�һ����Ա������name�������ַ������ݣ�
//	int age;//�ṹ��stu����ĵ�2����Ա������age,�����ͣ�����ѧ������
//	char sex[5];//�ṹ��stu����ĵ�3����Ա������sex,���ַ���������ѧ���Ա�
//	char id[20];//�ṹ��stu����ĵ�4����Ա������id,���ַ���������ѧ��ѧ��
//}Stu;
//struct T
//{
//	int a;
//	struct Stu s1;//�ṹ��T���еĽṹ�������s1
//	char* p;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	//struct Stu s;//�����ṹ��ֲ�������s
//	Stu s1 = {"����",20,"��","1243454"};//���±�����ΪStu�Ľṹ�����ͣ�����ֱ����stu��������Ӧ�Ľṹ�������
//	struct Stu s2 = { "����",21,"��","1433543" };//Ҳ������ԭ���Ľṹ����������struct Stu;
//	struct T t1 = { 12,s1,arr };
//	//��ӡ�ṹ���еı�����
//	printf("%d\n", t1.a);//��ӡ���ǽṹ��T�е�t1�����еĵ�һ������a;
//	printf("%s\n", t1.s1.name);//��ӡ���ǽṹ��T�е�t1�����еĵ�2������struct Stu s;;
//	printf("%s\n", t1.p);//��ӡ���ǽṹ��T�е�t1�����еĵ�3������char* p;;
//	return 0;
//}

//����2:����������ýṹ�����
typedef struct Stu
{
	//�ṹ��struct Stu�еĳ�Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;//����typedef���ǽ�struct Stu��������������ΪStu;
void print1(Stu tmp)
{
	printf("%s\n", tmp.name);//��ӡ�ṹ��tmp�е�name��Ա����Ϣ��

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
	//Stu���൱�����������ͣ�s1�Ǹ����������µ����ݱ���
	//s1�����Դ洢�ṹ���еĳ�Ա����Ϣ
	Stu s1 = { "����",43,"13383903456","��" };
	print1(s1);//��дһ���Զ��庯������������ṹ�����s1
	//����ṹ��ı���������Stu;
	print2(&s1);
	system("pause");//������ͣ����ı���ҳ��ģ�
	return 0;
}
