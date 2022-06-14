#define _CRT_SECURE_NO_WARNINGS
#include"game.h"//引用自己创建的头文件，用双引号；
//菜单函数：void menu
void menu()
{
	printf("**************************************\n");
	printf("*****继续游戏：1    退出游戏：0  *****\n");
	printf("**************************************\n");
}
//测试三子棋游戏
void test()
{
	int input;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("选择有误，请重新输入\n");
			break;
		}
		}
	} while (input);
}
//游戏的整个代码实现game;
void game()
{
	int i = 0;
	//数组—存放走出的棋盘信息：三行三列；
	char board[ROW][COL] = { 0 };//定义棋盘为3*3的；
	InitBoard(board,ROW,COL);//初始化棋盘信息，都放入空格；
	//DisplayBoard(board, ROW, COL);//打印出棋盘；


}
//三子棋的主函数；
int main()
{
	test();
	return 0;
}