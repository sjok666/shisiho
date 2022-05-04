#pragma once
#define ROW 3
#define COL 3
//ÉùÃ÷º¯Êý
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputureMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);