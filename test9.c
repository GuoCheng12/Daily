
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ṹ��

struct Book
{
	char name[10];
	int price;
};

int main ()
{
	//���ýṹ�崴��һ���ṹ�����
	struct Book b1 = {"������" , 50};
	printf ("%s\n",b1.name);
	printf("%d\n",b1.price);

	return 0;
}

