//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#define SPACE ' '
#define STAR '*'
#define NUMSIZE '#'

#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//以下均为声明函数
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
int player_move(char board[ROW][COL], int row, int col);
void com_move(char board[ROW][COL], int row, int col);
char cheakWin(char board[ROW][COL], int row, int col);
int is_Full(char board[ROW][COL], int row, int col);