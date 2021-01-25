//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Initboard(char board[ROW][COL], int row, int col)//此函数实现将棋盘初始化为空格
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = SPACE;
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)//此函数功能：实现打印棋盘.
{
	                                                               // c | c | c
	                                                               //---|---|---
	                                                               // c | c | c 
	                                                               //---|---|---
	                                                               // c | c | c 
	int i;
	int j;
	for (i = 0; i < row; i++){

		for (j = 0; j < col; j++){
			printf(" %c ", board[i][j]);
			if (j < col - 1){
				printf("|");
			}
		}printf("\n");
		if (i < row - 1){
			for (j = 0; j < col; j++){
				printf("---");
				if (j < col - 1){
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
int player_move(char board[ROW][COL], int row, int col)
{
	int x, y;
	int flag = 0;
	while (1){
			
	printf("Player :>\n");
	scanf("%d%d", &x,&y);//这里请注意，玩家输入的X和Y都是以玩家角度输入，所以并不能对应数组上的坐标
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (board[x-1][y-1] != SPACE)
		{
			printf("This is occupied! Please do it again.:>\n");
		}
		else
		{
			board[x - 1][y - 1] = STAR;
			flag = 1;
		}
		break;
	}
	else
	{
		printf("Wrong,try again.\n");
	}
}
	return flag;
}
void com_move(char board[ROW][COL], int row, int col)
{
	printf("Computer :>\n");
	int x, y;
	while (1)
	{
		x = rand() % row;//模行数 = 行数 - 1;
		y = rand() % col;//模列数 = 列数 - 1;
		if (board[x-1][y-1] == SPACE)
		{
			board[x - 1][y - 1] = NUMSIZE;
			break;
		}
		else
		{
			continue;
		}
	}
}
int is_Full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == SPACE)
				return 0;
		}
	}
	return 1;
}
char cheakWin(char board[ROW][COL], int row, int col)
{
	//分为三种类型，行，列，对角线
	
	int i,j;
	for (i = 0; i < row; i++)//行
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != SPACE)
		{
			return board[i][0];
		}
	}
	for (j = 0; j < col; j++)//列
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != SPACE)
		{
			return board[0][j];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != SPACE)//对角线
	{
		return board[0][0];
	}
	if (1 == is_Full(board,row,col))//打平
	{
		return 'Q';
	}
	return 'C';
}