#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
//利用二分法打印逐一从两侧靠近的一串字符
//二分法
int main ()
{
	char ch1[] ={"Welcome to BJUT"};
	char ch2[] ={"###############"};
	int left = 0;
	int right = strlen(ch1)-1;

	while (left<=right)
	{
	ch2[right] = ch1[right];
	ch2[left] = ch1[left];

	right--;
	left++;

	printf("%s\n",ch2);
	Sleep(1000);
	system("cls");
	}
	printf("Welcome to BJUT\n");
	return 0;
}