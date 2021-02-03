//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char set)//初始化棋盘
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)//打印棋盘，只打印row 和 col就好
{
	int i, j;
	printf("-------Minesweeper-------\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char mine[ROWS][COLS], int row, int col,int count)
{
	//1 - 9之间的数字
	while (count)//炸弹数量
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == ZERO)
		{
			mine[x][y] = BOOM;//放炸弹
			count--;
		}
	}
}
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * ZERO;
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int count)
{
	//1.坐标合法？
	//2.是否为雷？并且统计雷数.
	int sum = 0;
	int x, y;
	while (sum <= ROW*COL - count)
	{
		printf("Please input the place :>\n");
		scanf("%d%d", &x, &y);
	if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
		if (mine[x][y] == BOOM)
		{
			printf("BOOM!\n");
			Displayboard(mine, row, col);
			break;
		}
		else
		{
			int ret = GetMineCount(mine, x, y);
			sum++;
			show[x][y] = ret+ZERO;
			Displayboard(show, ROW, COL);
		}
		}
	else
		{
			printf("Wrong pointer.\n");
		}
	}	
	if (sum == ROW*COL - count)
	{
		printf("is ok Now.\n");
	}
}