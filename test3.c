#define _CRT_SECURE_NO_WARNINGS 1
//此章讲述while语句循环

#include <stdio.h>

int main()
{
	int line = 0;
	while(line<=10000)//和if 语句一样，不能加; 否则报错
	{
		printf ("学习学习学习 %d\n",line);
	    line++;

	}
	    if (line>10000)
	printf ("成功\n");
	return 0;
}


//int main()
//{
//	int sum = 0, i = 1;
//	int num;
//
//	printf("\n输出1000个数字:");
//
//	while (i<=1000)
//	{
//		scanf("%d",num);
//		i++;
//		sum = sum + num;
//	}
//
//	printf("平均值为: %lf\n",sum*1.0/(i-1));
//
//
//	return 0;
//}
