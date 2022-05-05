#include "game.h"



void menu()
{
	printf("******************************\n");
	printf("*****1. play     0. exit *****\n");
	printf("******************************\n");
}

void game()
{
	//雷的信息存储
	char mine[ROWS][COLS]={0};             //布置雷的信息
	char show[ROWS][COLS]={0};             //排查后雷的信息
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	PrintBoard(mine,ROW,COL);
	PrintBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	PrintBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入>");
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
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	

}
int main()
{
	text();
	return 0;
}