#define _CRT_SECURE_NO_WARNINGS
//��Դ�ļ�.c��Ҫ���������к��������
#include"game.h"
//��ʼ��������Ϣ��������ո�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//�����̽��г�ʼ����������ո�
			                  //ע�⣺�ĳɵ����ţ������ַ���˫�������ַ�����
		}
	}
}
//��ӡ�����̣�
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
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);//1.��ӡһ�е�����
//		printf("---|---|---|");//2.��ӡ�ָ��У�
system("pause");
//
//	}
//
//
//}