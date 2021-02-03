//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
//模拟实现qsort(采用冒泡排序)
int cmp_int(const void * e1, const void * e2)//cmp函数的实现,return 的值为 >0, =0, <0 
{
	return (*(int*)e1) - (*(int*)e2);
}
void _swap(char * buf1, char * buf2, size_t width)//_swap函数的实现,用来交换两个比较的数字
//(关键)，强制类型转化成char*之后,利用形参width来进行交换。假设交换的是int，那么每个int类型的字节大小为4
//那么两个数字的每个字节都进行交换，则完成目的
//所以一定要buf1++和buf2++
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		int temp = 0;
		temp = *buf1;
		*buf1 = *buf2;
		*buf2 = temp;
		buf1++;
		buf2++;
	}
}
void bubble_Sort(void*base, size_t sz, size_t width, int(*cmp)(const void * e1, const void * e2))
//核心函数--即冒泡排序本身,形参要有base-即数组开始地址，sz为数组长度，width为类型宽度（重要），接着为cmp函数
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)//条件判断，比较难想，首先要强制类型
				//转换为char* 因为char为一个字节，加上宽度的话，即可以进行相邻两个数字的比较
				//所以宽度很重要~
			{
				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);//_swap函数，满足条件语句
				//后进行交换
			}
		}
	}
}
void print_int(int arr[], int sz)//简单的打印
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test1()//测试整形数组的交换
{
	int arr[] = { 1, 2, 4, 3, 6, 7, 5, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	bubble_Sort(arr, sz, width, cmp_int);
	print_int(arr, sz);
}
struct SL
{
	char name[20];
	int age;
};
int cmp_struct_name(const void * e1, const void * e2)
{
	return strcmp(((struct SL*)e1)->name, ((struct SL*)e2)->name);
}
void test2()//测试名字排序
{
	struct SL arr[] = { { "zhangsan", 16 }, { "lisi", 25 }, { "wangwu", 12 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	int width = sizeof(arr[0]);
	bubble_Sort(arr, sz, width, cmp_struct_name);
	for (i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
	}
}
int main(void)
{
	test2();
	return 0;
}