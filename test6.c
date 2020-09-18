#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int maxsum (int a, int b)
{
	//这里有两种写法，一种是再创建一个max变量 当a>b是，max变量等于a，相反等于b；这样做的话到最后要返回return max;
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

	printf("请打入两个数字，系统判定其较大值\n");
	scanf("%d%d",&nub1, &nub2);
	z = maxsum(nub1,nub2);
	printf("最大值是:%d\n",z);


	return 0;
}
