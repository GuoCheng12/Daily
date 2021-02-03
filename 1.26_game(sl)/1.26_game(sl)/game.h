//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define SPACE ' '
#define STARPOINT '*'
#define ZERO '0'
#define BOOM '1'
#define BOOM_COUNT 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Displayboard(char board[ROWS][COLS], int row, int col);
void set_mine(char mine[ROWS][COLS], int row, int col,int count);
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count);