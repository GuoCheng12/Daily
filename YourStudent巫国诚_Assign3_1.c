//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
////猜字游戏
//void start()
//{
//	int change = 0;
//	int ret = 0;
//	int guess = 0;
//	int flag = 0;
//	ret = rand()%100+1;
//	while(change<10)
//	{
//		printf("请从1-100的数字中猜一个数字\n");
//		scanf("%d",&guess);
//			
//			if(guess>ret)
//			{
//				printf("猜大了\n");
//				flag++;
//				change++;
//				printf("你已猜测了%d次\n",flag);
//			}
//			else if(guess<ret)
//			{
//				printf("猜小了\n");
//				flag++;
//				change++;
//				printf("你已猜测了%d次\n",flag);
//			}
//			else 
//			{
//				printf("猜对了\n");
//				break;
//			}
//	}
//}
//
//void menu()
//{
//	printf("######################\n");
//	printf("###1.play###0.exit####\n");
//	printf("######################\n");
//}
//int main()
//{
//	
//	int sr = 0;
//	srand((unsigned int)time(NULL));
//	printf("猜字游戏\n");
//
//	do
//	{	
//		menu();
//		scanf("%d",&sr);
//			switch(sr)
//			{
//				case 1:
//					start();
//					break;
//				case 0:
//					printf("欢迎下次再来");
//					break;
//				default:
//					printf("选择错误");
//					break;
//			}
//	}
//	while(sr);
//
//	return 0;
//}