//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()//打印菜单
{
		printf("************************\n");
		printf("******   1.Play    *****\n");
		printf("******   0.Exit    *****\n");
		printf("************************\n");
}
void game()
{
	char board[ROW][COL];//创建棋盘
	int ret = 0;
	int res;
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	//开始下棋
	while (1)
	{
	//player_move(board, ROW, COL);//玩家下棋
	int ret = player_move(board, ROW, COL);
	res = cheakWin(board, ROW, COL);
	if (res != 'C'){
	break;
	}
	Displayboard(board, ROW, COL);
	if (1 == ret)
	{
	com_move(board, ROW, COL);//电脑下棋
	}
	else
	{
		continue;
	}
	ret = cheakWin(board, ROW, COL);
	if (res != 'C'){
		break;
	}
	Displayboard(board, ROW, COL);
	}
	if (res == 'Q')
		printf("Draw!\n");
	else if (res == NUMSIZE)
		printf("Computer win\n");
	else if (res == STAR)
		printf("Player win\n");
	Displayboard(board, ROW, COL);
}
int main(void)
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Please input 1 or 0:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Exit,welcome again.\n");
			Sleep(1000);
			break;
		default:
			printf("Wrong input,please do it again.\n");
			break;
		}
	} while(input);
	return 0;
}