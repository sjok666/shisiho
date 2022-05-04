//#include <stdio.h>
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("****1. play   0. exit*****\n");
	printf("**************************\n");
}
//游戏整个算法的实现
void game()
{
	int ret = 0;
	char board[ROW][COL] = {0};                     //数组存放棋盘信息
	initboard(board, ROW, COL);                     //初始化棋盘，使棋盘开始里面全是空格
	DisplayBoard(board, ROW, COL);                  //打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);                    //玩家走
		DisplayBoard(board, ROW, COL);                  //打印
		ret = Iswin(board,ROW,COL);                                  //判断玩家赢
		if (ret != 'D')
			break;
		ComputureMove(board, ROW, COL);                 //电脑走
		DisplayBoard(board, ROW, COL);                  //打印
		ret=Iswin(board, ROW, COL);                                        //判断电脑赢
		if (ret != 'D')
			break;
	}
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入");
			break;
		}
	} while (input);
}
int main()
{
	text();
	return 0;
}