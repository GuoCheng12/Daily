//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()//打印菜单
{
	printf("****************************\n");
	printf("**********  1.Play   *******\n");
	printf("**********  0.Exit   *******\n");
	printf("****************************\n");
}
void game()//游戏(game)函数
{
	char mine[ROWS][COLS];//创建游戏棋盘
	char show[ROWS][COLS];
	while (1)
	{
	Initboard(mine, ROWS, COLS, ZERO);//初始化雷区
	Initboard(show, ROWS, COLS, STARPOINT);
	//Displayboard(mine, ROW, COL);//打印棋盘
	Displayboard(show, ROW, COL);
	set_mine(mine, ROW, COL, BOOM_COUNT);//布置雷
	find_mine(mine, show, ROW, COL, BOOM_COUNT);
	//Displayboard(mine, ROW, COL);
	}
}
int main(void)
{
	int input;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("Please choice 1 or 0:>\n");//用户选择
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//选择1进入游戏
			break;
		case 0:
			printf("Bye.\n");//选择0退出游戏
			break;
		default:
			printf("Wrong input.\n");
		}
	} while (input);

	return 0;
}