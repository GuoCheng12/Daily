#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	int sum = 0;
//	int n = 0;
//
//
//	return 0;
//}

//�ʣ����ѭ���ܽ��м���
//int main ()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0,k=0;k=0;i++,k++)//����ڶ����ַ�����˼�����жϣ����Ǹ�ֵ����0���Ǽ٣��������ѭ��ѹ������ȥ.
//		k++;
//	return 0;
//}
//

//do...whileѭ��

int main()
{
	int i = 1;
	do 
	{
		if(i == 5)
			continue;
	   printf("%d\n",i);
	   i++;
	}
	while (i<=10);
    return 0 ;
}