//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "fun.h"
//链式访问.C语言中，函数都有一个返回值
//printf函数返回值是所打印字符的个数

//int main(void)
//{
//	printf("%d", printf("%d", printf("%d", 43)));//43 2 1
//	return 0;
//}

//函数调用与声明
//1.一般大项目工程都是建立一个test.c用来控制全局，fun.c 用来调试函数, fun.h用来声明函数
//2.如果你制作了一个开源项目，卖给某人
//可以将 .h头文件和生成一个.lib文件卖给别人   
//生成lib文件的方法：右键项目名->属性->常规->配置类型->.lib（静态库)类型
//引用静态库方法:  #pragma comment (lib,"fun.lib");

//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int ret = fun(a, b);
//	printf("%d ", ret);
//
//	return 0;
//}

//函数递归
//思路：大事化小，函数自己调用自己
//eg:输入一个数字，将数字上每一位打印出来

//void print(int a)//如a = 1234
//{
//	if (a > 9)//a 是一个大于9，也即两位数字
//	{
//		print(a / 10);//第一级递归，123，之后第二级递归，123/10 = 12；..........
//	}
//	printf("%d ", a % 10);//打印4
//}
////
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//}
//递归的基本思路：（详细介绍见《C Primer Plus》P221）
//第一次不理解的地方：每次函数调用都会返回一次，当函程序执行完毕后，控制权将返回上一级递归
//好的递归一定有一个if语句限制条件，不然会陷入死递归


//eg2:写一个my_strlen(char *str)函数用来计算字符串长度(利用递归,也即不能创建临时变量)

//大体思路: "abcdef"
// my_strlen(abcdef) = 1 + my_strlen(bcdef) = 1 + 1 + my_strlen(cdef)......
//= 1 + 1 + 1 + 1 + 1 + 1 + my_strlen("\0") = 6

//int my_strlen(char * str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//第一级递归，1+bcdef;第二级:1+1+cdef......
//	}
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d ", ret);
//	return 0;
//}
//eg3:计算N的阶乘

//int fnc(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//			return n*fnc(n - 1);
//	}
//		
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int ret = fnc(n);
//	printf("%d", ret);
//	return 0;
//}
//eg4 :计算第N个斐波那契数列(讨论递归的优缺点)
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1)+Fib(n - 2);
//}
//如果这样计算，当N较大时，时间复杂度非常高，成指数性增长
//所以不建议使用递归思路来解决斐波那契数列问题
//int Fib2(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fib2(n);
//	printf("%d", ret);
//}

//汉诺塔问题
//思路，每次将最下面最大的木块想办法移到一根什么都没有的柱子上去
int flag = 0;
int  Hanoi(int n)//n为a柱上圆盘的个数
{
	if (1 == n)
	{
		flag++;//当n=1,只需要将那个盘子移到C就搞定了
	}
	else if(n>1)//n>1时，首先要将n-1当作整体，移到B上，然后将最大那个盘子移到C上
		//接下来n-1的整体，递归思想，重复上面步骤。
	{
		Hanoi(n - 1);
		flag++;
		Hanoi(n - 1);
	}
	return flag;
}


int main(void)
{
	int n;
	scanf("%d", &n);
	int ret = Hanoi(n);
	printf("%d", ret);
	return 0;
}