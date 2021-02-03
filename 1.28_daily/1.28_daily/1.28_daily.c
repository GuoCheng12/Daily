//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main(void)
//{
//	int ret;
//	ret = Fun(2);
//	printf("%d ", ret);
//	return 0;
//}

//void Cal(long n)
//{
//	if (n > 9)
//	{
////得到当前数字最后一位
//		Cal(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main(void)
//{
//	long long a = 10150126;
//	Cal(a);
//}

//int factorial(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//		return n*factorial(n - 1);
//}
//int main(void)
//{
//	int n = 5;
//	int ret = factorial(n);
//	printf("%d ", ret);
//	return 0;
//}

//int main(void)
//{
//	int n;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	if (n == 1)
//		printf("%d ", 1);
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			sum *= i;
//		}
//		printf("%d ", sum);
//	}
//	return 0;
//}

//int main(void)
//{
//	char a[] = "abcdef";
//	int sz = sizeof(a) / sizeof(a[0]);
//	printf("%d ", sz);
//}

//int cal(char * str)
//{
//	if (*str != '\0')
//		return 1 + cal(str + 1);
//	else
//		return 0;
//}
//int main(void)
//{
//	char str[] = "abcdef";
//	int ret = cal(str);
//	printf("%d ", ret);
//}

//int main(void)
//{
//	char arr[] = "abcdef";
//	char *p = arr;
//	int count = 0;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	printf("%d ", count);
//	return 0;
//}
//完成逆序
//思路：1.算出字符串长度
//2.完成逆序

//int cal_sz(char * str)
//{
//	if (*str != '\0')
//		return 1 + cal_sz(str + 1);
//	else
//		return 0;
//}
//void NX(char * str)
//{
//	char * p = str;
//	int count = 0;
//	int sum;
//	while (*p != '\0')
//	{
//		p++;
//		count++;
//	}
//	sum = count;
//	printf("%c ", *(str + (sum - 1)));
//	NX(str - 1);//错误解法
//}

//void reverse_string(char * string)
//{
//	if (*string != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	printf("%c", *string);
//}
//int main(void)
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	return 0;
//}
//计算Sum(1729) = 1+7+2+9;
int Sum(int a)
{
	if (a > 9){
		Sum(a/10);
	}//分解1,7,2,9

	return flag;
}

int main(void)
{
	int a;
	scanf("%d", &a);
	int ret = Sum(a);
	printf("%d ", ret);
}
