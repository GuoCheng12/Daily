#define _CRT_SECURE_NO_WARNINGS 1
//���½���while���ѭ��

#include <stdio.h>

int main()
{
	int line = 0;
	while(line<=10000)//��if ���һ�������ܼ�; ���򱨴�
	{
		printf ("ѧϰѧϰѧϰ %d\n",line);
	    line++;

	}
	    if (line>10000)
	printf ("�ɹ�\n");
	return 0;
}


//int main()
//{
//	int sum = 0, i = 1;
//	int num;
//
//	printf("\n���1000������:");
//
//	while (i<=1000)
//	{
//		scanf("%d",num);
//		i++;
//		sum = sum + num;
//	}
//
//	printf("ƽ��ֵΪ: %lf\n",sum*1.0/(i-1));
//
//
//	return 0;
//}
