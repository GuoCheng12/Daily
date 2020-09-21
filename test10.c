#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 0;
//	while((ch = getchar()) !=EOF)
//	{
//		if(ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//for循环
//for和while循环最大的不同是，for循环可以一次性将初始，判断，调整，一次囊括起来


//使用for循环来书写1-10号数字
//int main()
//{
//	int i =0;
//	for (i = 1;i<=10;i++)//1.初始值 2.判断值 3.调整值   中间用 ; 隔开
//	{
//		if(i ==6)
//			break;
//		printf("%d\n",i);
//	}
//
//	return 0;
//}

//int main()
//{
//	for (; ;)//for循环中的初始，判断，调整都可以省略
//	{
//		printf("nbnb");
//	}
//	return 0;
//}