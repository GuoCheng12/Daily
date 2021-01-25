//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一个冒泡排序（数组传参)
//最优解决方案，(效率最高)
void bubble_sort(int arr[],int sz)
{
	int i;
	int flag = 1;//假设开始就已经有序排列了
	for (i = 0; i < sz - 1; i++)
	{
		int j;
		for (j = 0; j < sz - 1 - i; j++)
		{
			int temp;
			if (arr[j]>arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//如果交换了数字，代表无序。则将flag设置为0;
			}
		}
		if (flag == 1)
		{
			break;//如果一趟冒泡排序中已经有序，则无需再进行排序。跳出循环
		}
	}
}
int main(void)
{
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz;
	int i;
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


int main(void)
{
	int arr[10] = { 0 };
	printf("%d \n", sizeof(arr));
	printf("%d \n", sizeof(int[10]));
	//数组名是首元素的地址，但是有两个例外
	//1.sizeof(数组名)-中，数组名不是首元素的地址，而是整个数组.
	//2.&数组名，这里的数组名是整个数组，取出的是整个数组的地址！！！

	return 0;
}