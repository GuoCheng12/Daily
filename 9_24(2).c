#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//дһ�����룬��һ�����飨����ģ����ҵ�7

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
//			printf("Here is it  �±���:%d",i);
//		break;
//		}
//	}
//	if(i == sz)
//		printf("�Ҳ���");
//
//	return 0 ;
//}+


//�ڶ��ַ��������ַ�����(����)
//�����±����м�ֵ���𲽲��ҷ�Χ

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
//		printf("�ҵ��ˣ��±���%d\n",mid);
//	break;
//	}
//		}
//	if(left > right )
//		printf("�Ҳ���");
//
//
//	return 0;
//}
//��˼����if��ʱ��Ҫ��ע�������ţ���Ȼ����else���µ�bug�Ұ���Ҳ�Ҳ�������
//while���ѭ����������ĥ