#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������ʹ��
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main ()
{
	int a = 100;
	int b = 200;
    int sum;
    sum = Add(a , b);
	printf ("%d\n",sum);
	return 0;
}
//�Զ��庯���ĺô����ǿ��Կ�ʼ�����һ�����ӵ����㣬����������ĺ�����д�з���
