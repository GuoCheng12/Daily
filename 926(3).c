#define _CRT_SECURE_NO_WARNINGS 1
//求两数的最大公约数
//算法实现，辗转相除法

#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;
	int z = 0;
	printf("请输入两个数字，求最大公约数\n");
	scanf("%d%d",&a,&b);
	while (a%b)
	{
		z = a%b;
		b = z;
		a = b;
	}
	printf("最大公约数为:%d\n",b);

	return 0;
}