#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//����2��ʵ��strcpy�Ĺ��ܣ��������ַ������������
//void my_strcpy(char* ar1,char* ar2)//���͹���������Ԫ�صĵ�ַ
//{
//	while (*ar2 != '\0')
//	{
//		*ar1 = *ar2;
//		ar2++;
//		ar1++;
//	}
//	*ar1 = *ar2;//��arr2ȡ��\0�ĵ�ַ��ʱ��
//
//}
//�汾2������assert���ԣ��жϴ��ݹ������ַ��ĵ�ַ�ǲ���Ϊ�գ�
//void my_strcpy(char* ar1,const char* ar2)
//{
//	assert(ar1 != NULL);//assertҪʹ�ã����������ͷ�ļ�
//	assert(ar2 != NULL);//���ar2������NULL�ĵ�ַ����ô����ط�����ִ���
//	while (*ar1++ = *ar2++)
//		//��ar2����\0��ʱ�����whileѭ���ᱻ�ж�
//		//��ar2������\0��ʱ��ar2�����ֵ�ᱻ����ar1
//	{
//		;
//
//	}
//}
// �汾4��ֱ�ӷ���Ŀ��ĵ�ַ
char* my_strcpy(char* ar1,const char* ar2)//�����Ƶ��Ǹ��ַ����ı������ܸı䣻
{//Ҫ����ar1����ַ����������������׵�ַ������һ����������ar1�׵�ַ�ģ�
	char* ret = ar1;//����û�Լӵ�ʱ���ar1�ĵ�ַ�����׵�ַ��
	assert(ar1!=NULL);
	assert(ar2 != NULL);
	//��ar2ָ����ַ������Ƶ�ar1ָ��Ŀռ䣬����\0�ַ���
	while (*ar1++ = *ar2++)//��ֵ�����Լӵ�ַ��һֱ��\0,ѭ���������
	{
		;
	}
	return ret;//����ar1���ָ��������׵�ַ����ar1�����ַ����ĵ�ַ:ret��
}
int main()
{
	char arr1[] = "###########";
	char arr2[] = "bit";
	//my_strcpy(arr1, arr2);//��arr2������ַ������Ƶ�arr1����ȥ
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	 const int num = 10;
//	 //const��������һ�������������޸ģ�������̬������
//	 //numָ���ǳ���������const���εľֲ�������
//	const int* p = &num;
//	//const��������ָ�룺����Ϊ����ָ��
//	//����ָ�룺�ǲ���ͨ�����ָ�����޸ĳ���num��ֵ
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}