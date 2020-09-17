#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//函数的使用
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main ()
{
	int a = 100;
	int b = 200;
    int sum;
    sum = Add(a , b);
	printf ("%d\n",sum);
	return 0;
}
//自定义函数的好处就是可以开始就设计一个复杂的运算，避免在下面的函数书写中繁琐
