#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//写一串代码，从一组数组（有序的）中找到7

//int main()
//{
//	char arr1[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int k = 7;
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	
//	for(i=0;i<sz;i++)
//	{
//		if(k == arr1[i])
//		{
//			printf("Here is it  下标是:%d",i);
//		break;
//		}
//	}
//	if(i == sz)
//		printf("找不到");
//
//	return 0 ;
//}+


//第二种方法。二分法查找(有序)
//利用下标求中间值，逐步查找范围

//int main()
//{
//	char arr[] = {1,2,3,4,5,6,7,8,9,10};
//	
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	int k = 8;
//	while(left <= right)
//		{
//	int mid = (left+right)/2;
//	if (arr[mid]>k)
//
//	{
//		right = mid - 1;
//	}
//	else if(arr[mid] <k)
//	{
//		left =mid + 1;
//	}
//	else 
//	{
//		printf("找到了，下标是%d\n",mid);
//	break;
//	}
//		}
//	if(left > right )
//		printf("找不到");
//
//
//	return 0;
//}
//反思，用if的时候，要多注意打大括号，不然悬空else导致的bug找半天也找不出来。
//while语句循环条件多琢磨