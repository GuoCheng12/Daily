//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//void test1(char * str)
//{
//
//}
//int main(void)
//{
//	int(*pf)(int, int) = &Add;//pf就是一个函数指针,返回类型必须和函数一致
//	//void(* pf2)(char *) = &test1;
//
//	//printf("%p ", &Add);
//	//printf("%p ", Add);
//	//两个值是一样的，用法也一样。和数组不一样
//	//int ret = (*pf)(2, 3);//函数指针pf的用法，解引用* 也可以省略
//	int ret = (pf)(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main(void)
//{
//	char arr[] = "abcdef";
//	int (*pf)(const char*) = my_strlen;
//	int ret = pf("BJUT");
//	int ret2 = pf(arr);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	return 0;
//}

//下面这个代码是啥意思?
// ( * (void(*)() )0 ()
//调用0地址处的函数（强制类型转换），返回类型为void



//函数指针数组
//int(*pfArr[2])(Fun1, Fun2);//两个函数的地址，放到一个函数指针数组里面

//演示使用指针函数数组
//制作一个小型计算器.
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main(void)
//{
//	int x, y;
//	int input;
//	int(*pfArr[])(int,int) = { 0, Add, Sub, Mul, Div };
//	printf("Please input the num;>");
//	scanf("%d", &input);
//	printf("and two num:>");
//	scanf("%d%d", &x, &y);
//	int ret = pfArr[input](x,y);//这样显得代码不会很冗余，不然就一堆case语句,也很好的可以增加代码功能。
//	//在这的话，函数指针数组有另外一个名字 ---转移表
//	printf("ret = %d\n", ret);
//
//	return 0;
//}



//指向函数指针数组的指针
//既然函数指针数组是一个数组的话，那么我们为啥不可以取地址？
//所以假设现在有一个pArr函数指针数组，那么取地址&pArr,然后放到一个指向函数指针数组的指针

//eg:

//int(*pArr[4])(int, int);//函数指针数组
/*int(*(*ppArr)[4])(int, int) = &pArr;*///它不是一个数组，所以用小括号括起来；--指向函数指针数组的指针

//回调函数


//回调函数就是一个利用函数指针调用函数
//如果你将一个函数指针当作形参传给另一个函数时，我们称这种方式为回调函数：(qsort是个好例子~)
//回调函数不是由该函数实现方直接调用，而是在特定条件或者特定事件发生时调用，用于对该时间或事件的相应！
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );


//管你有没有看懂！用就完事了！....(不行，一定要看懂！)
//void test1()
//{
//	printf("wwwwwww\n");
//}
//void test2(void(*p)())
//{
//	p();
//}
//int main(void)
//{
//	test2(test1);
//	return 0;
//}


//学习qsort
//首先先得铺垫一下void * 类型是什么
//int a = 10;
//void *p = &a;
//void * 类型不能解引用，但是可以接受任何类型的地址

//回来看一下qsort 
//void qsort( void *base,
//size_t num,
//size_t width,
//int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
#include <stdlib.h>
void print(int arr[], int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int cmp_int(const void*e1, const void*e2)
{
	//void*不能解引用，所以得强制类型转换
	return *(int*)e1 - *(int*)e2;
}

//void qsort(void *base, size_t num, size_t width, int(*cmp)(const void*e1, const void*e2))
//第四个形参是一个函数指针，qsort中定义，返回为 0 为等于， 大于0为e1>e2 ,小于0为e1<e2
//所以要写一个函数来专门比较e1和e2

void test1()
{
	int arr[] = { 0, 1, 3, 2, 4, 9, 8, 5, 6, 7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print(arr, sz);
}
struct Str{
	char name[20];
	int age;
};
int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct Str*)e1)->age - ((struct Str*)e2)->age;
}
void test2()
{
	struct Str arr[] = { { "zhangsan", 21 }, { "wangwu", 30 }, { "lisi", 15 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_struct_age);
	int i;
	for (i = 0; i < sz; i++)
	{
		printf("%s\n", arr[i].name);
	}
}
int main(void)
{
	test2();
	return 0;
}