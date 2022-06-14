#define _CRT_SECURE_NO_WARNINGS
//该源文件.c主要是用来进行函数定义的
#include"game.h"
//初始化棋盘信息，都放入空格；
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//对棋盘进行初始化，都放入空格
			                  //注意：改成单引号，才是字符，双引号是字符串；
		}
	}
}
//打印出棋盘；
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |
//void DisplayBoard(char board[ROW][COL], int row int col)
//{
//	int i;
//	for (i = 0; i < row; i++)
//	{
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);//1.打印一行的数据
//		printf("---|---|---|");//2.打印分割行；
system("pause");
//
//	}
//
//
//}