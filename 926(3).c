#define _CRT_SECURE_NO_WARNINGS 1
//�����������Լ��
//�㷨ʵ�֣�շת�����

#include <stdio.h>

int main ()
{
	int a = 0;
	int b = 0;
	int z = 0;
	printf("�������������֣������Լ��\n");
	scanf("%d%d",&a,&b);
	while (a%b)
	{
		z = a%b;
		b = z;
		a = b;
	}
	printf("���Լ��Ϊ:%d\n",b);

	return 0;
}