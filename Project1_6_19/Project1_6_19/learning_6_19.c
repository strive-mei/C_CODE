#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//代码2：实现strcpy的功能：即复制字符串里面的内容
//void my_strcpy(char* ar1,char* ar2)//传送过来的是首元素的地址
//{
//	while (*ar2 != '\0')
//	{
//		*ar1 = *ar2;
//		ar2++;
//		ar1++;
//	}
//	*ar1 = *ar2;//当arr2取到\0的地址的时候，
//
//}
//版本2：加入assert断言：判断传递过来的字符的地址是不是为空；
//void my_strcpy(char* ar1,const char* ar2)
//{
//	assert(ar1 != NULL);//assert要使用，必须包含其头文件
//	assert(ar2 != NULL);//如果ar2里面是NULL的地址，那么这个地方会出现错误；
//	while (*ar1++ = *ar2++)
//		//当ar2等于\0的时候，这个while循环会被中断
//		//当ar2不等于\0的时候，ar2里面的值会被赋给ar1
//	{
//		;
//
//	}
//}
// 版本4：直接返回目标的地址
char* my_strcpy(char* ar1,const char* ar2)//被复制的那个字符串的变量不能改变；
{//要返回ar1这个字符串，即返回他的首地址，另定义一个变量来存ar1首地址的；
	char* ret = ar1;//即还没自加的时候的ar1的地址，即首地址；
	assert(ar1!=NULL);
	assert(ar2 != NULL);
	//把ar2指向的字符串复制到ar1指向的空间，包含\0字符；
	while (*ar1++ = *ar2++)//赋值并且自加地址，一直到\0,循环会结束；
	{
		;
	}
	return ret;//返回ar1这个指针变量的首地址，即ar1整个字符串的地址:ret；
}
int main()
{
	char arr1[] = "###########";
	char arr2[] = "bit";
	//my_strcpy(arr1, arr2);//将arr2里面的字符串复制到arr1里面去
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

//int main()
//{
//	 const int num = 10;
//	 //const用来定义一个变量不允许被修改，产生静态的作用
//	 //num指的是常量，它被const修饰的局部变量；
//	const int* p = &num;
//	//const用来修饰指针：被称为常量指针
//	//常量指针：是不能通过这个指针来修改常量num的值
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}