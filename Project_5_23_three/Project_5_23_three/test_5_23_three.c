#define _CRT_SECURE_NO_WARNINGS
#include"game.h"//�����Լ�������ͷ�ļ�����˫���ţ�
//�˵�������void menu
void menu()
{
	printf("**************************************\n");
	printf("*****������Ϸ��1    �˳���Ϸ��0  *****\n");
	printf("**************************************\n");
}
//������������Ϸ
void test()
{
	int input;
	do
	{
		menu();
		printf("��ѡ��");
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
			printf("�˳���Ϸ\n");
			break;
		}
		default:
		{
			printf("ѡ����������������\n");
			break;
		}
		}
	} while (input);
}
//��Ϸ����������ʵ��game;
void game()
{
	int i = 0;
	//���顪����߳���������Ϣ���������У�
	char board[ROW][COL] = { 0 };//��������Ϊ3*3�ģ�
	InitBoard(board,ROW,COL);//��ʼ��������Ϣ��������ո�
	//DisplayBoard(board, ROW, COL);//��ӡ�����̣�


}
//���������������
int main()
{
	test();
	return 0;
}