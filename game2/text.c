#include "game.h"



void menu()
{
	printf("******************************\n");
	printf("*****1. play     0. exit *****\n");
	printf("******************************\n");
}

void game()
{
	//�׵���Ϣ�洢
	char mine[ROWS][COLS]={0};             //�����׵���Ϣ
	char show[ROWS][COLS]={0};             //�Ų���׵���Ϣ
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	PrintBoard(mine,ROW,COL);
	PrintBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	PrintBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
void text()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������>");
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
			printf("�����������������\n");
			break;
		}
	} while (input);
	

}
int main()
{
	text();
	return 0;
}