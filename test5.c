#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//本章讲解数组库
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放十个整数数字的数组
	//当然也可以float arr[10]  char arr[]....
	//访问数组是用其下标，比如访问5，则我们只需在arr[]中打上4即可，因为数组的顺序是从0开始
	int i = 1;
	while (i<10)
	{
		printf("%d\n",arr[i]);
		i++;
	}

       printf("end");


	return 0;
}

