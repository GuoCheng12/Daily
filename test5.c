#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���½��������
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����ʮ���������ֵ�����
	//��ȻҲ����float arr[10]  char arr[]....
	//���������������±꣬�������5��������ֻ����arr[]�д���4���ɣ���Ϊ�����˳���Ǵ�0��ʼ
	int i = 1;
	while (i<10)
	{
		printf("%d\n",arr[i]);
		i++;
	}

       printf("end");


	return 0;
}

