#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
1.++ --的用法
int main()
{
	int a = 1;
	int b = a++;//后置++的作用，先使用，再++
	//int b = ++a;//前置++的作用，先++，后使用
	printf("a= %d b =%d\n",a ,b);
	//同理有前置-- 和后置--
	//操作顺序同++
	return 0;
}


2.逻辑运算符
int main()
{
	int a = 0;
	int b = 4;
	/*int c = a && b;*///c语言中真假
	               //        1 0;
	//&&逻辑与（所以其中两个都为真，c才为真）
	int c = a || b;
	//||逻辑或（其中有一个为真，c就为真)
	printf("%d\n",c);

	return 0;
}

3.条件运算符

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("请输入两个值\n");
	scanf("%d%d",&a , &b);

	max = ( a>b ? a: b);
	printf("%d\n",max);

	return 0;
}
//比用if else语句更快   exp1 ? exp2 : exp3

