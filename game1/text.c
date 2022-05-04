//#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("****1. play   0. exit*****\n");
	printf("**************************\n");
}
//��Ϸ�����㷨��ʵ��
void game()
{
	int ret = 0;
	char board[ROW][COL] = {0};                     //������������Ϣ
	initboard(board, ROW, COL);                     //��ʼ�����̣�ʹ���̿�ʼ����ȫ�ǿո�
	DisplayBoard(board, ROW, COL);                  //��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);                    //�����
		DisplayBoard(board, ROW, COL);                  //��ӡ
		ret = Iswin(board,ROW,COL);                                  //�ж����Ӯ
		if (ret != 'D')
			break;
		ComputureMove(board, ROW, COL);                 //������
		DisplayBoard(board, ROW, COL);                  //��ӡ
		ret=Iswin(board, ROW, COL);                                        //�жϵ���Ӯ
		if (ret != 'D')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}