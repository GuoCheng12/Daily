//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
////������Ϸ
//void start()
//{
//	int change = 0;
//	int ret = 0;
//	int guess = 0;
//	int flag = 0;
//	ret = rand()%100+1;
//	while(change<10)
//	{
//		printf("���1-100�������в�һ������\n");
//		scanf("%d",&guess);
//			
//			if(guess>ret)
//			{
//				printf("�´���\n");
//				flag++;
//				change++;
//				printf("���Ѳ²���%d��\n",flag);
//			}
//			else if(guess<ret)
//			{
//				printf("��С��\n");
//				flag++;
//				change++;
//				printf("���Ѳ²���%d��\n",flag);
//			}
//			else 
//			{
//				printf("�¶���\n");
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
//	printf("������Ϸ\n");
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
//					printf("��ӭ�´�����");
//					break;
//				default:
//					printf("ѡ�����");
//					break;
//			}
//	}
//	while(sr);
//
//	return 0;
//}