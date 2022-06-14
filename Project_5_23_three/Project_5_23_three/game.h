#pragma once
//该头文件.h主要是用来放函数声明的
#define ROW 3//全局声明变量：即在game这个函数里面，ROW就表示3
#define COL 3//全局声明变量：即在game这个函数里面，COL就表示3
#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col);
//void DisplayBoard(char board[ROW][COL], int row int col);