#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int maxsum (int a, int b)
{
	//����������д����һ�����ٴ���һ��max���� ��a>b�ǣ�max��������a���෴����b���������Ļ������Ҫ����return max;
   if (a>b)
	   return a;
   else 
       return b;
 
}

int main ()
{
	int nub1 = 0;
	int nub2 = 0;
	int z = 0;

	printf("������������֣�ϵͳ�ж���ϴ�ֵ\n");
	scanf("%d%d",&nub1, &nub2);
	z = maxsum(nub1,nub2);
	printf("���ֵ��:%d\n",z);


	return 0;
}
