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

//问，这个循环能进行几次
//int main ()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0,k=0;k=0;i++,k++)//这里第二串字符的意思不是判断，而是赋值，而0又是假，所以这个循环压根进不去.
//		k++;
//	return 0;
//}
//

//do...while循环

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