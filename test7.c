#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
1.++ --���÷�
int main()
{
	int a = 1;
	int b = a++;//����++�����ã���ʹ�ã���++
	//int b = ++a;//ǰ��++�����ã���++����ʹ��
	printf("a= %d b =%d\n",a ,b);
	//ͬ����ǰ��-- �ͺ���--
	//����˳��ͬ++
	return 0;
}


2.�߼������
int main()
{
	int a = 0;
	int b = 4;
	/*int c = a && b;*///c���������
	               //        1 0;
	//&&�߼��루��������������Ϊ�棬c��Ϊ�棩
	int c = a || b;
	//||�߼���������һ��Ϊ�棬c��Ϊ��)
	printf("%d\n",c);

	return 0;
}

3.���������

int main()
{
	int a = 0;
	int b = 0;
	int max = 0;
	printf("����������ֵ\n");
	scanf("%d%d",&a , &b);

	max = ( a>b ? a: b);
	printf("%d\n",max);

	return 0;
}
//����if else������   exp1 ? exp2 : exp3

