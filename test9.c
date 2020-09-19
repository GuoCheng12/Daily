
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体

struct Book
{
	char name[10];
	int price;
};

int main ()
{
	//利用结构体创建一个结构体变量
	struct Book b1 = {"如何起飞" , 50};
	printf ("%s\n",b1.name);
	printf("%d\n",b1.price);

	return 0;
}

